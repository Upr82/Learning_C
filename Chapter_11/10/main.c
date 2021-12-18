#include <stdio.h>
#define SIZE 10

int main(void)
{
    int i;
    char word[SIZE];
    while(fgets(word, SIZE, stdin)!=NULL && word[0]!='\n')
    {
        i=0;
        while(word[i]!='\n' && word[i]!='\0')
            i++;
        if(word[i]=='\n')
            word[i]='\0';
        else
            while (getchar()!='\n')
            continue;


        puts(word);
    }




    return 0;
}
