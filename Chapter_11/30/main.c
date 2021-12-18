#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ""

void stsrt(char *strings[], int n);
char *s_gets(char *, int);

int main()
{
    system("chcp 1251");
    system("cls");

    int i, cnt=0;

    char input[LIM][SIZE];
    char *ptstr[LIM];

    printf("Введите до %d строк, для завершения ввода, введите пустую строку.\n", LIM);

    while(cnt<LIM && s_gets(input[cnt], SIZE)!=NULL && input[cnt][0]!='\0')
    {
        ptstr[cnt]=input[cnt];
        cnt++;
    }

    stsrt(ptstr, cnt);

    puts("Вот что получилось:");
    for(i=0;i<cnt;i++)
        puts(ptstr[i]);

    return 0;
}
void stsrt(char *strings[], int n)
{
    int top, seek;
    char *temp;
    for(top=0;top<n-1;top++)
        for(seek=top+1;seek<n;seek++)
            if(strcmp(strings[top],strings[seek])>0)
            {
                temp=strings[top];
                strings[top]=strings[seek];
                strings[seek]=temp;
            }
}
