#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

struct book
{
    char *first;
    char *second;
    int letter;
};

char *s_gets(char *str, int n);

void getinfo(struct book *ps);
void calc(struct book *ps);
void show(const struct book *ps);
void cleanup(struct book *ps);

int main()
{
    system("chcp 1251");
    struct book market;

    getinfo(&market);
    calc(&market);
    show(&market);
    cleanup(&market);

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
        else
            while(getchar()!='\n')
            continue;
    }
    return result;
}
void getinfo(struct book *ps)
{
    char temp[SIZE];
    puts("Enter first name: ");
    s_gets(temp, SIZE);
    ps->first=(char *)malloc(strlen(temp)+1);
    strcpy(ps->first, temp);

    puts("Enter second name: ");
    s_gets(temp, SIZE);
    ps->second=(char *)malloc(strlen(temp)+1);
    strcpy(ps->second, temp);
};
void calc(struct book *ps)
{
    ps->letter=strlen(ps->first)+strlen(ps->second);
};
void show(const struct book *ps)
{
    printf("%s %s в ваших имени и фамилии %d символов.\n",
           ps->first, ps->second, ps->letter);
}
void cleanup(struct book *ps)
{
    free(ps->first);
    free(ps->second);
}
