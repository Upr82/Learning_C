#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

struct names
{
    char first[SIZE];
    char second[SIZE];
    int letter;
};

char *s_gets(char *str, int n);
void getinfo(struct names *sp);
void calc(struct names *sp);
void show(const struct names *sp);

int main()
{
    system("chcp 1251");

    struct names sag;

    getinfo(&sag);
    calc(&sag);
    show(&sag);

    printf("\nEnd!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result;
    int i=0;

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
void getinfo(struct names *sp)
{
    printf("Введите Ваше имя: ");
    s_gets(sp->first,SIZE);
    printf("Введите Вашу фамилию: ");
    s_gets(sp->second, SIZE);
}
void calc(struct names *sp)
{
    sp->letter=strlen(sp->first)+strlen(sp->second);
}
void show(const struct names *sp)
{
    printf("Дорогой %s %s, в Ваших имени и фамилии содержится %d символов.\n",
           sp->first, sp->second, sp->letter);
}
