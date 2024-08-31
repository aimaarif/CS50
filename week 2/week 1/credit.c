#include <stdio.h>

int main() {
    //decalre card variable to store card number input by user.
    long card;                        
    //decalre last variable to store digit of a card number.                          
    int last;  
    //decalre seclast variable to store 2nd last digit card number.                                                      
    int seclast;    
    //declare result to store the checksum answer acc to Luh'n algo.                                             
    int result=0;   
    //declare store to store the seclast digit value befor it become zero.                                           
    int store;         
    //declare storecard to store the last digit value of card before it become zero.                                           
    int storecard;                                          
    printf("Enter your card number: ");
    //take input by user and store  it in card.
    scanf("%ld", &card);
    //repeating untill card becomes zero.
    while(card!=0){        
        //accessing last digit of card taking modulo by 10.                            
        last=card%10;    
        //dividing card by 10 to eliminate the last digit.                                
        card=card/10;     

        if(card!=0){
            //if condition satisfies, storing the value of card in storecard before it becomes zero in the next steps during last iteration.
            storecard=card;                            
        }
        //storing the value of seclast in store before it becomes zero in the next step during last iteration.
        store=seclast;   
        //accessing seclast digit of card taking modulo by 10.                              
        seclast=card%10;         
        //Multipling second last digit by 2 acc to Luhn's algo.                  
        seclast*=2;            

        if (seclast>9){
            //Now, if secondlast digit becomes greater than 9. Then, we are going to add both digits .i.e. 10=1+0=1,11=1+1=2,12=1+2=3.etc. So, % 10 will get us the last digit of seclast and /10 will give us the first digit of seclast. Adding these digits of seclast, value of last and previous value of result itself will bring us the updated result. 
            result=result+(seclast%10+seclast/10)+last;     
        }
        else {
            //Otherwise, add previous value of result, seclast and last value to get updated result.
            result+=seclast+last;               
        }
        //dividing card again by 10 to eliminate the current last digit of updated card.
        card=card/10;    

        if(card!=0){
            //if condition satisfies, storing the value of card in storecard before it becomes zero in the next steps during last iteration.
            storecard=card;                         
        }
    }

    //dividing store by 2 to get the real value of seclast because we multiplied it by 2 in previous tests.
    store=store/2;    
    //dividing seclast by 2 to get the real value of seclast because we multiplied it by 2 in previous tests.                                
    seclast=seclast/2;

    //Now, apply conditions to print required outputs. Remember, storecard will store the first digit of card. If card digits are even then seclast will store the first digit of card and last will store second digit.  If card digits are odd then seclast will store the second digit of card and last will store first digit.

    if(storecard  == 3 && (store == 4 || store == 7) && result%10==0){
        printf("American Express\n");
    }
    else if (storecard == 5  && (last >= 1 && last <= 5) && result%10==0){
        printf("Master Card\n");
    }
    else if (storecard == 4 && result%10==0){
        printf("Visa Card\n");
    }
    else if (result%10==0){
        printf("Valid\n");
    }
    else {
        printf("invalid\n");
    }
}