#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 81
#define WORDS 20

char *s_gets(char *, int);
void strsrt(char *strings[], int n);

int main()
{
    system("chcp 1251");
    system("cls");
    char arr[WORDS][SIZE];
    char *strptr[WORDS];
    int cnt=0, i;

    printf("Введите до %d строк, для окончания два раза Enter.\n", WORDS);
    while(cnt<WORDS && s_gets(arr[cnt], SIZE)!=NULL && arr[cnt][0]!='\0')
    {
        strptr[cnt]=arr[cnt];
        cnt++;
    }
    strsrt(strptr, cnt);
    puts("Вот сам массив:");
    for(i=0;i<cnt;i++)
        puts(arr[i]);
    puts("А вот массив указателей на строки массива:");
    for(i=0;i<cnt;i++)
        puts(strptr[i]);


    return 0;
}
void strsrt(char *strings[], int n)
{
    int a,b;
    char *temp;
    for(a=0;a<n-1;a++)
    {
        for(b=a+1;b<n;b++)
            if(strcmp(strings[a],strings[b])>0)
            {
                temp=strings[a];
                strings[a]=strings[b];
                strings[b]=temp;
            }
    }
}
