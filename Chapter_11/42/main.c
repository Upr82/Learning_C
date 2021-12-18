#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

int main()
{
    system("chcp 1251");
    char name[SIZE];
    int i;
    char *ptr;
    char *find_space(char *str, int n);
    char *s_gets(char *str, int n);

    puts("Введите строку (для выхода пустая строка): ");
    while(s_gets(name,SIZE) && name[0]!='\0')
    {
        puts("Введите номер символа, начиная с которго искать пробел: ");
        scanf("%d", &i);
        ptr=find_space(name, i);
        getchar();
        if(ptr)
            printf("Вот первый пробел, начиная с символа №%d: %s\n", i, ptr);
            else puts("Пробелы не найдены.");
        puts("Введите строку (для выхода пустая строка): ");
    }
    printf("End!\n");
    return 0;
}
char *find_space(char *str, int n)
{
    char *result;
    result=strchr(str+n,' ');
    return result;
}
char *s_gets(char *str, int n)
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
        else while(getchar()!='\n')
                continue;
    }
    return result;
}
