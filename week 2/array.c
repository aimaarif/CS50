
#include <stdio.h>

int main() 
{
    int array [3];
    printf("Enter first integer: ");
    scanf("%i", &array[0]);
    printf("Enter second integer: ");
    scanf("%i", &array[1]);
    printf("Enter third integer: ");
    scanf("%i", &array[2]);
    printf("array[0]: %i\narray[1]: %i\narray[2]: %i\n ",array[0], array[2], array[2]);
}

#include <stdio.h>

int main()
{
    int array [3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your integer: ");
        scanf("%i", &array[i]);
    }
    printf("array[0]: %i\narray[1]: %i\narray[2]: %i\n ",array[0], array[2], array[2]);
}

#include <stdio.h>

const int n = 3;

float average(int length, int array[]);

int main() 
{
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter your integer: ");
        scanf("%i", &array[i]);
    }
    printf("Average: %.2f", average(n, array));
}

float average(int length, int array[]){
    int sum=0;
    for (int i = 0; i < length; i++){
        sum += array[i];
    }
    return sum/(float) length;
}

