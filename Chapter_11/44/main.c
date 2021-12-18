#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 11


int main()
{
    system("chcp 1251");
    char name[SIZE];
    //int i;
    char *m_gets(char *, int);
    printf("Введите имя, не более %d символов: ", SIZE-1);
    m_gets(name, SIZE);
    puts("Вот вывод: ");
    for(int i=0;i<SIZE;i++)
    printf("#%d = %c [%d]\n",i, name[i], name[i]);


    return 0;
}
char *m_gets(char *str, int n)
{
    char *result;
    int i, flag=0;
    //result=fgets(str, n, stdin);
    while(i<(n-1) && flag==0)
    {
        str[i]=getchar();
        if (isspace(str[i]))
        flag=1;
        i++;
    }
    result=str;
    return result;
}
