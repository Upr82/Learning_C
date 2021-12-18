#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char * s_gets(char*, int n);
    char words1[40];
    char words2[40];

    s_gets(words1, 40);
    s_gets(words2, 40);

    strcat(words1, words2);
    puts(words1);
    puts(words2);


    return 0;
}
char * s_gets(char * str, int n)
{
    char * ptr;
    int i=0;
    puts("¬веди строку: ");
    ptr=fgets(str, n, stdin);
    if (ptr)
    {

    while(str[i]!='\n' && str[i]!='\0')
        i++;

        if (str[i]=='\n')
            str[i]='\0';
        else
            while(getchar()!='\n')
            continue;


    }

    return ptr;
}
