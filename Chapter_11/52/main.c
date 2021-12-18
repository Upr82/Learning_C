#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 40
#define STR 10

int wordlen(char *str);

int main()
{

    char name[STR][SIZE];
    system("chcp 1251");
    char *s_gets(char *str, int n);
    void menu(char *arr[], int n);
    int real_str=0;;

    int i;

    puts("Введите до 10 строк или ^Z для завершения ввода:");
    for(i=0;i<STR;i++)
        {
            if(s_gets(name[i], SIZE)==NULL)
                break;
        }
    real_str=i;
    char *trans_arr[real_str];

    for(i=0;i<real_str;i++)
    {
        trans_arr[i]=name[i];
    }

    menu(trans_arr, real_str);

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
        {
            if(str[i]==26)
            {
                str[i]='\0';
                return NULL;
            }
            i++;
        }
        if(str[i]=='\n')
            str[i]='\0';
        else while(getchar()!='\n')
                continue;
    }
    return result;
}
void menu(char *arr[], int n)
{
    char *alter[n];

    char *ptr;
    int q, i,j;

    for(i=0;i<n;i++)
            alter[i]=arr[i];

    puts("Выберите нужный пункт по способу вывода данных");
    puts("1 - вывод исходного списка строк");
    puts("2 - вывод строк по сопоставлению в кодах ASCII");
    puts("3 - вывод строк в порядке возрастания длины");
    puts("4 - вывод строк в порядке возрастания длины первого слова");
    puts("5 - выход");
    while(scanf("%d", &q)==1 && q>0 && q<5)
    {
        switch (q)
        {
        case 1:

            for(i=0;i<n;i++)
                puts(arr[i]);
            break;
        case 2:
            for(i=0;i<(n-1);i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(strncmp(alter[i],alter[j],n)>0)
                    {
                        ptr=alter[i];
                        alter[i]=alter[j];
                        alter[j]=ptr;
                    }
                }
            }
            for(i=0;i<n;i++)
                puts(alter[i]);

            break;
        case 3:
            for(i=0;i<(n-1);i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(strlen(alter[i])>strlen(alter[j]))
                    {
                        ptr=alter[i];
                        alter[i]=alter[j];
                        alter[j]=ptr;
                    }
                }
            }
            for(i=0;i<n;i++)
                puts(alter[i]);
            break;
        case 4:
            for(i=0;i<(n-1);i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(wordlen(alter[i])>wordlen(alter[j]))
                    {
                        ptr=alter[i];
                        alter[i]=alter[j];
                        alter[j]=ptr;
                    }
                }
            }
            for(i=0;i<n;i++)
                puts(alter[i]);

            break;
        }
        puts("Выберите нужный пункт по способу вывода данных");
        puts("1 - вывод исходного списка строк");
        puts("2 - вывод строк по сопоставлению в кодах ASCII");
        puts("3 - вывод строк в порядке возрастания длины");
        puts("4 - вывод строк в порядке возрастания длины первого слова");
        puts("5 - выход");
    }
}
int wordlen(char *str)
{
    int len=0;
    while(isalnum(*(str+len))==1)
        len++;
    return len;
}
