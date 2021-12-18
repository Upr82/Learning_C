#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20


int main()
{
    system("chcp 1251");
    char *s_gets(char *str, int n);
    char number[SIZE];
    char *symbol;
    long answer;
    puts("Введите целое чило, для выхода - пустая строка.");
    while(s_gets(number,SIZE) && number[0]!='\0')
    {
        answer=strtol(number, &symbol, 10);
        printf("Введённое число в 10 системе = %ld. Всё закончилось на %s(%d).\n",answer, symbol, *symbol);
        answer=strtol(number, &symbol, 16);
        printf("Введённое число в 16 системе = %ld. Всё закончилось на %s(%d).\n",answer, symbol, *symbol);

        puts("Введите целое чило, для выхода - пустая строка.");
    }






    return 0;
}
char *s_gets(char *str, int n)
{
    char *result;
    int i=0;
    result=fgets(str, n, stdin);
    if (result)
        {
            while(str[i]!='\0' && str[i]!='\n')
                i++;
            if(str[i]=='\n')
                str[i]='\0';
            else while(getchar()!='\n')
                continue;
        }

    return result;
}
