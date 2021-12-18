#include <stdio.h>
#include <string.h>
#include <windows.h>
#define WORDS 5
#define CHARACTER 40
#define SYMBOL 'к'
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char *s_gets(char *str, int n);
    char arr[WORDS][CHARACTER];
    char temp[CHARACTER];
    int count=0;
    printf("Введите %d слов, начинающихся на %c.\n", WORDS, SYMBOL);
    while(count<WORDS && s_gets(temp, CHARACTER))
    {
        if(temp[0]==SYMBOL)
        {
            puts("подходит!");
            strcpy(arr[count],temp);
            count++;
        } else
        {
            puts("Ошибка! Попробуйте ещё.");
        }
    }


    return 0;
}
char *s_gets(char *str, int n)
{
    char *result;
    int i=0;
    result=fgets(str, n, stdin);
    if(*result)
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
