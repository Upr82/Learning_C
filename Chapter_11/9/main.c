#include <stdio.h>

int main(void)
{
    char word [10];
    puts("Enter text:");
    while(fgets(word,10, stdin)!=NULL && word[0]!='\n')
    {
        fputs(word, stdout);
    }


    return 0;
}
