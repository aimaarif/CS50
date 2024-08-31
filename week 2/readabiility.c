#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(char text[]);
int count_words(char text[]);
int count_sentences(char text[]);
int letters=0;
int words=1;
int sentences=0;
float ind;
float L=0;
float S=0;

int main(void)
{
    // Prompt the user for some text
    char text[1000];
    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    // Count the number of letters, words, and sentences in the text
    letters = count_letters(text);
    printf("Letters: %i\n", letters);
    words = count_words(text);
    printf("words: %i\n", words);
    sentences = count_sentences(text);
    printf("sentences: %i\n", sentences);

    // Compute the Coleman-Liau index
    L=((float)letters/(float)words)*100;
    printf("L: %f\n", L);
    S=((float)sentences/(float)words)*100;
    printf("S: %f\n", S);
    ind = 0.0588 * L - 0.296 * S - 15.8;
    ind = round(ind);
    printf("Index: %.0f\n", ind);

    // Print the grade level

    for (int i = 0; i<16; i++){
        if (ind == i){
        printf("Grade %i\n", i);
    }
    }

    if (ind < 1){
        printf("Below Grade 1\n");
    }
    else if (ind >= 16){
        printf("Grade 16+\n");
    }


}

int count_letters(char text[])
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters+=1;
        }
    }
    return letters;
}

int count_words(char text[])
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i]==' ')
        {
            words+=1;
        }
    }
    return words;
}

int count_sentences(char text[])
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i]=='.' || text[i]=='?' || text[i]=='!')
        {
            sentences+=1;
        }
    }
    return sentences;
}
