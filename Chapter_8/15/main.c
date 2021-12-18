#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

char prev=' ', curr;
int word=0, letter=0, medium_letter;

bool inword=false;

int main(void)
{
    while ((curr=getchar())!=EOF)
    {
        if ((!isalpha(prev))&&(isalpha(curr)))
        {
            inword=true;
            word++;
        }
        if ((isalpha(prev))&&(!isalpha(curr)))
        {
            inword=false;
        }

        if (inword)
            letter++;
        prev=curr;
    }
    medium_letter = letter/word;
    printf("Words=%d, letters=%d, medium letters=%d.\n", word, letter, medium_letter);



    return 0;
}

