#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define WORDS 5
#define CHARACTER 50
#define SYMBOL 'К'

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char * s_gets(char * str, int n);
    char temp[CHARACTER];
    char arr[WORDS][CHARACTER];
    int count=0;

    printf("Введите до %d слов, которые начинаются на %c.\n", WORDS, SYMBOL);
    while(count<WORDS && s_gets(temp, CHARACTER))
    {
        if (temp[0]==SYMBOL)
        {
            strcpy(arr[count],temp);
            count++;
        }
        else printf("Ошибка! %s начинается не на %c.\n", temp, SYMBOL);
    }
    puts("Вот, что Вы ввели:\n");
    for(count=0;count<WORDS;count++)
    {
        puts(arr[count]);
    }


    return 0;
}
char * s_gets(char * str, int n)
{
    char * rezult;
    int i = 0;
    rezult=fgets(str, n, stdin);
    if(*rezult)
    {
        while(str[i]!='\0' && str[i]!='\n')
            i++;
        if(str[i]=='\n')
            str[i]='\0';
        else while(getchar()!='\n')
                continue;
    }
    return rezult;
}
