#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5

struct namect
{
    char *first;
    char *second;
    int letter;
};

char *s_gets(char *str, int n);
void getinfo(struct namect *info);
int calc(char *cp1, char *cp2);
void showinfo(const struct namect *info);
void clean(struct namect *info);

int main()
{
    system("chcp 1251");
    struct namect sag;

    getinfo(&sag);
    sag.letter=calc(sag.first, sag.second);
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
void getinfo(struct namect *info)
{
    char temp[SIZE];
    printf("Введите Ваше имя: ");
    s_gets(temp, SIZE);
    info->first = (char *)malloc(strlen(temp)+1);
    strcpy(info->first, temp);

    printf("Введите Вашу фамилию: ");
    s_gets(temp, SIZE);
    info->second = (char *)malloc(strlen(temp)+1);
    strcpy(info->second, temp);
}
int calc(char *cp1, char *cp2)
{
    int sum;
    sum=strlen(cp1)+strlen(cp2);
    return sum;
}
void showinfo(const struct namect *info)
{
    printf("%s %s в ваших имени и фамилии %d символов.\n",
           info->first, info->second, info->letter);
}
void clean(struct namect *info)
{
    free(info->first);
    free(info->second);
}
