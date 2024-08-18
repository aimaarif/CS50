#include <stdio.h>

int main(void) {
    char answer[100];
    printf("What's your name: ");
    fgets(answer, sizeof(answer), stdin); 
    printf("Hello, %s\n", answer);
}

int main(void) {
    int x,y;
    printf("enter value of x: ");
    scanf("%d", &x);
    printf("enter value of y: ");
    scanf("%d", &y);
    if (x<y) {
        printf("x less than y");
    }
    else if (x==y){
        printf("x equals to y");
    }
    else{
        printf("x greater than y");
    }
}

int main(void) {
    char c;
    printf("So, do you agree? ");
    scanf("%c", &c);
    if (c == 'y' || c == 'Y'){
        printf("Agreed");
    }
    else if (c == 'n' || c == 'N'){
        printf("Disagreed");
    }
    else {
        printf("Neutral");
    }
}

int main() {
    int i=0;
    while(i<=3){
        printf("LangC meow\n");
        i++;
    }
}

int main(void) {
    int i=3;
    do{
        printf("LangC meow\n");
        i--;
    }
    while(i>=0);
}
int main(){
    
for(int i=0;i>-3;i--){
    printf("meow\n");
}

}

void meow(int n);

int main(void) {
    meow(5);
}
void meow(int n){
    for(int i=0; i<=n; i++) {
        printf("meow\n");
    }
}

int main(void) {
int x,y;
printf("Enter value of x: ");
scanf("%i", &x);
printf("Enter value of y: ");
scanf("%i", &y);

printf("x+y = %d\n", x+y);
printf("x-y = %d\n", x-y);0
printf("x*y = %d\n", x*y);
printf("x/y = %d\n", x/y);
printf("x%y = %d\n", x%y);
}

int add(int a, int b);

int main(void) {
int x,y;
printf("Enter value of x: ");
scanf("%i", &x);
printf("Enter value of y: ");
scanf("%i", &y);
add(x,y);
}

int add(int a, int b) {
    int c=a+b;
    printf("The sum of the values are: %i\n", a+b);
}


int main(){
    int n, m;
    do{
    printf("Enter the length of grid: ");
    scanf("%i", &n);
    if(n<=0||n>99){
        printf("Wrong input, type again;\n");
    }
    }while(n<=0||n>=99);
    do{
    printf("Enter the width of grid: ");
    scanf("%i", &m);
    if(m<=0||m>99){
        printf("Wrong input, type again;\n");
    }
    }while(m<=0||m>=99);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf(" # ");
        }
        printf("\n");
    }
}