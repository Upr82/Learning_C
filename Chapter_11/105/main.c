#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

char *f_gets(char *, int);

int main()
{
    system("chcp 1251");
    char word[SIZE];
    printf("¬ведите свою строку:\n");
    f_gets(word,SIZE);
    puts(word);
    printf("%s\n", word);
    return 0;
}
char *f_gets(char *str, int n)
{
    char *result;
    int i=0;
    result=fgets(str,n,stdin);
    if(result)
    {
        while(str[i]!='\0' && str[i]!='\n')
            i++;
        if(str[i]=='\n')
            str[i]='\0';
        else
            while(getchar()!='\n')
                continue;
    }
    return result;
}
