// Online C compiler to run C program online
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char key[26];
    char plain_text[1000];
    char substitute[1000];
    printf("key\n");
    fgets(key, sizeof(key), stdin);
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        if (n < 25)
        {
            printf("key must contain 26 characters.");
            break;
            return 1;
        }
        else if (isdigit(key[i])) {
            printf("key must contain alphabetic characters.");
            break;
            return 1;
        }
    }
    printf("plaintext: ");
    fgets(plain_text, sizeof(plain_text), stdin);
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (isalpha(plain_text[i]) && plain_text[i] == key[j])
            {
                if (isupper(key[i])) 
                {
                    substitute[i] += toupper(key[j]);
                }
                if (islower(key[i]))
                {
                    substitute[i] += islower(key[j]);
                }
            }
            else
            {
                substitute[i] = plain_text[i];
            }
        }
    }
    printf("Substitute: %s", substitute);
}


