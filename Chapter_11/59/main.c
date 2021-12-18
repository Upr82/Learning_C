#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 20

int main()
{
    system("chcp 1251");
    int num_str(char *str);
    char name[SIZE];
    char *s_gets(char *str, int n);
    //double data;

    puts("Введите число: ");
    s_gets(name, SIZE);
    while(name[0]!='\0' && num_str(name)!=0)
    {
        printf("Вы ввели число %g\n вводите следующее или пустую строку.\n",atof(name));
        s_gets(name, SIZE);
    }


    printf("End!\n");
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

int num_str(char *str)
{
    int result=1, i=0;
    while(str[i]!='\0')
    {
        if(isdigit(str[i])!=1 && str[i]!='.')
            {
                result=0;
                printf("%c не число и не точка\n", str[i]);
            }
        i++;
    }

    return result;
}
