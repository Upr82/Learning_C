#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30

struct name {
char *first;
char *second;
int letters;
};

void getinfo(struct name *temp);
void calc(struct name *temp);
void show(const struct name *temp);
void clean(char *, char *);

char *p1, *p2;

char *s_gets(char *str, int n);
int main()
{
    system("chcp 1251");

    struct name shag;

    getinfo(&shag);
    calc(&shag);
    show(&shag);
    clean(p1, p2);


    printf("\nHello world!\n");
    return 0;
}

char *s_gets(char *str, int n)
{
    char *result, *fin;
    result = fgets(str, n, stdin);
    if(result)
    {
        fin = strchr(str, '\n');
        if(fin)
            *fin='\0';
        else while(getchar()!='\n')
                continue;
    }
    return result;
}

void getinfo(struct name *temp)
{
    char arr[SIZE];
    printf("Введите Ваше имя: ");
    s_gets(arr, SIZE);
    p1=(char *)malloc(strlen(arr)+1);
    strcpy(p1, arr);
    temp->first=p1;

    printf("Введите Вашу фамилию: ");
    s_gets(arr, SIZE);
    p2=(char *)malloc(strlen(arr)+1);
    temp->second = p2;
    strcpy(temp->second, arr);
}
void calc(struct name *temp)
{
    temp->letters = strlen(temp->first) + strlen(temp->second);
}
void show(const struct name *temp)
{
    printf("%s %s в ваших имени и фамилии %d символов.\n",
           temp->first, temp->second, temp->letters);
}
void clean(char *pc1, char *pc2)
{
    free(pc1);
    free(pc2);
}
