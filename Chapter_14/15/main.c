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
struct names getinfo(void);
struct names calc(struct names info);
void showinfo(struct names info);

int main()
{
    system("chcp 1251");
    struct names sag;

    sag=getinfo();
    sag=calc(sag);
    showinfo(sag);

    printf("\nEnd!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result, *fin;
    result=fgets(str, n, stdin);
    if(result)
    {
        fin=strchr(str, '\n');
        if(fin)
            *fin='\0';
        else while(getchar()!='\n')
                continue;
    }
    return result;
}
struct names getinfo(void)
{
    struct names info;
    printf("Введите Ваше имя: ");
    s_gets(info.first,SIZE);
    printf("Введите Вашу фамилию: ");
    s_gets(info.second,SIZE);
    return info;
};
struct names calc(struct names info)
{
    info.letter=strlen(info.first)+strlen(info.second);
    return info;
};
void showinfo(struct names info)
{
    printf("%s %s, в Ваших имени и фамилии %d символов.\n",
           info.first, info.second, info.letter);
}
