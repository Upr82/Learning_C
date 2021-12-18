#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40

struct namect
{
    char *first;
    char *second;
    int letter;
};
void getinfo(struct namect *info);
void calc(struct namect *info);
void showinfo(const struct namect *info);
void clean(struct namect *info);

char *s_gets(char *str, int n);

int main()
{
    system("chcp 1251");

    struct namect sag;

    getinfo(&sag);
    calc(&sag);
    showinfo(&sag);
    clean(&sag);
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
void clean(struct namect *info)
{
    free(info->first);
    free(info->second);
}

void getinfo(struct namect *info)
{
    char name[SIZE];

    printf("Введите Ваше имя: ");
    s_gets(name, SIZE);
    info->first=(char *)malloc(strlen(name)+1);
    strcpy(info->first,name);

    printf("Введите Вашу фамилию: ");
    s_gets(name, SIZE);
    info->second=(char *)malloc(strlen(name)+1);
    strcpy(info->second,name);
};

void showinfo(const struct namect *info)
{
    printf("%s %s в ваших имени и фамилии %d символов.\n",
           info->first, info->second, info->letter);
}

void calc(struct namect *info)
{
    info->letter=strlen(info->first)+strlen(info->second);
}
