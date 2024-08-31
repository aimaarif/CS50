// Mario Right Aligned Pyramid

#include <stdio.h>

int main() {
    int h;
    printf("Enter the height of pyrammid: ");
    scanf("%d", &h);
    int j=1;
    int m=h;
    for (int i=0; i<=h;  i++){
        for (int l=m; l>=0; l--){
            printf(" ");
        }
        for (int k=0; k<j; k++){
            printf("#");
        }
        printf("\n");
        j++;
        m--;
    }
    
}

// Improvements, removing unnecessary intialization

int main() {
    int h;
    printf("Enter the height of pyrammid: ");
    scanf("%d", &h);
    for (int i=1; i<=h;  i++){
        for (int j=0; j<h-i; j++){
            printf(" ");
        }
        for (int k=0; k<i; k++){
            printf("#");
        }
        printf("\n");
    }
    
}


//Mario Adjacent  Pyramids

#include <stdio.h>

int main() {
    int h;
    printf("Enter the height of pyrammid: ");
    scanf("%d", &h);
    for (int i=1; i<=h;  i++){
        //printing spaces for right aligned, left side pyramid
        for (int j=0; j<h-i; j++){
            printf(" ");
        }
        //printing # for left side pyramid
        for (int k=0; k<i; k++){
            printf("#");
        }
        printf(" "); //space-between
        //printing # for right side pyramid
        for (int k=0; k<i; k++){
            printf("#");
        } 
        printf("\n");  
    }
    
}