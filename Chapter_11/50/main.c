#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 11

int main()
{
    system("chcp 1251");
    char name[SIZE];
    char *s_gets(char *str, int n);
    void revers(char *str, int n);
    //int i;

    printf("Введите Ваше имя (или пустую строку для выхода): ");
    s_gets(name, SIZE);
    while(*name!='\0')
    {
        revers(name, SIZE-1);
        printf("Вот Ваше имя наоборот: %s\n", name);

        printf("Введите Ваше имя (или пустую строку для выхода): ");
        s_gets(name, SIZE);
    }

    printf("Hell! world!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    int i=0;
    char *result;
    result=fgets(str, n, stdin);
    if(result)
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
void revers(char *str, int n)
{
    int i=0,j;
    char altername[n];
    while(str[i]!='\0')
    {
        //printf("[%d] = %c (%d)\n",i,str[i],str[i]);
        i++;
    }
    //printf("[%d] = %c (%d)\n",i,str[i],str[i]);

    for(j=0,i-=1;i>=0;i--,j++)
        altername[j]=str[i];
    altername[j]='\0';

    for(i=0;i<=j;i++)
        str[i]=altername[i];

}













