#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40
#define WORDS 5
#define CHARACTER 7

int main()
{
    system("chcp 1251");
    system("cls");
    char *s_gets(char *str, int n);
    char arr[WORDS][CHARACTER];
    char temp[SIZE];
    int count=0, available;

    printf("Введите %d слов не длиннее %d символов.\n", WORDS, CHARACTER-1);
    while(count<WORDS && s_gets(temp, SIZE))
    {
        available=CHARACTER-1-strlen(temp);
        //if(available>=0)
            strncpy(arr[count], temp, CHARACTER-1);
            arr[count][CHARACTER-1]='\0';
        count++;
    }
    puts("Вот, что сохранили:");
    for(count=0;count<WORDS;count++)
        puts(arr[count]);


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
        if (str[i]=='\n')
            str[i]='\0';
        else while(getchar()!='\n')
                continue;
    }
    return result;
}
