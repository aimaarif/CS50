#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int score1=0;
    int score2=0;
    char p1[100];
    char p2[100];
    char alphabets[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
                          
    int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    printf("Player 1: ");
    fgets(p1, sizeof(p1), stdin);
    printf("Player 2: ");
    fgets(p2, sizeof(p2), stdin);
    for (int i = 0, n=strlen(p1); i < n; i++)
    {
        p1[i] = toupper(p1[i]);
        
        for (int j = 0; j < 26; j++)
        {
            if (p1[i] == alphabets[j])
            {
                score1 += values[j];
            }
        }
    }
    printf ("Score: %i\n", score1);
    
    for (int i = 0, n=strlen(p2); i < n; i++)
    {
        p2[i]=toupper(p2[i]);
        
        for (int j = 0; j < 26; j++)
        {
            if (p2[i] == alphabets[j])
            {
                score2 += values[j];
            }
        }
    }
    printf ("Score: %i\n", score2);
    
    if (score1 > score2)  
    {
        printf("Player 1 wins!");
    }
    
    else if (score1 < score2)  
    {
        printf("Player 2 wins!");
    }
    else 
    {
        printf("Tie");
    }
}
