#include <stdio.h>

//Get length by  while loop

int main() {
    int n = 0;
    char string[10];
    printf("Length: ");
    scanf("%9s\n", &string);
    while (string[n] != 0)
    {
        n++;
    }
    printf("length: %i", n);
}

//Get length, decalring a separate function

#include <stdio.h>

// Correct function declaration using char * for strings
int string_length(char *s);

int main(void)
{
    char string[10]; // Array to store the input string
    printf("Enter a string: ");
    
    // Correct scanf usage
    scanf("%9s", string);  // Reads at most 9 characters to avoid buffer overflow

    int length = string_length(string);  // Get the length of the string
    printf("Length: %i\n", length);  // Print the length of the string

    return 0;  // Indicate that the program ended successfully
}

// Function to compute the length of the string
int string_length(char *s)
{
    int n = 0;
    // Count the number of characters until the null terminator '\0'
    while (s[n] != '\0')
    {
        n++;
    }
    return n;  // Return the computed length
}

// Get length by using strlen

#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[10];
    printf("Length: ");
    scanf("%9s", string);
    int length = strlen(string);
    printf("%i\n", length);
}


//Covert to upper case  letters

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100]; // Assuming a max input length of 99 characters plus the null terminator
    printf("Before: ");
    fgets(s, sizeof(s), stdin); // Read input from the user safely
    
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Convert lowercase letters to uppercase
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32); // Subtract 32 to convert to uppercase
        }
        else
        {
            printf("%c", s[i]); // Print the character as is
        }
    }
    printf("\n");
    return 0;
}

//Using C type library

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    printf("Before:  ");
    fgets(s, sizeof(s), stdin);
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

int main(void)
{
    char s[100];
    printf("Before:  ");
    fgets(s, sizeof(s), stdin);
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}
