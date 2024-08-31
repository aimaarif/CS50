// Cash return

#include <stdio.h>

int main() {
    int change;
    int quarter=0;
    int dime=0;
    int nickel=0;
    int penny=0;
    do{
        printf("Change owed: ");
        scanf("%d", &change);
        if (change<=0||change>=100){
            printf("Wrong input, type again.");
        }
    }while(change<=0||change>=100);
    while(change>=25){
        quarter ++;
        change-=25;
    }
    while(change>=10){
        dime ++;
        change-=10;
    }
    while(change>=5){
        nickel ++;
        change-=5;
    }
    while(change>=1){
        penny ++;
        change-=1;
    }
    printf("Total coins needed: %d quarter, %d dime, %d nickel, %d penny." , quarter, dime, nickel, penny);
    
}