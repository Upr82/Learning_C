#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 20
#define ALL_COL 5

const char *colors [ALL_COL] =
{
    "red", "yellow", "green", "blue", "violet"
};
char *s_gets(char *str, int n);

enum gradient {red, yellow, green, blue, violet};


int main()
{
    _Bool find_color = false;
    char col[SIZE];
    int i;
    enum gradient color;

    system("chcp 1251");
    printf("������� ������� ���� ��� ������ ������ ��� ����������: ");
    while(s_gets(col, SIZE)!=NULL && col[0]!='\0')
    {
        for(i=0;i<ALL_COL;i++)
        {
            if(strcmp(colors[i],col)==0)
            {
                find_color=true;
                color=i;
                break;
            }
        }
        if(find_color)
        {
            printf("���� %s � ����!!!\n", colors[i]);
            switch (color)
            {
            case red:
                printf("������� ����.\n");
                break;
            case yellow:
                printf("������ ��������.\n");
                break;
            case green:
                printf("������ �����.\n");
                break;
            case blue:
                printf("������� ������������.\n");
                break;
            case violet:
                printf("���������� ������.\n");
                break;
            }
        } else
        {
            printf("���� %s ��� ����������.\n", col);
        }

        find_color=false;
        printf("������� ������� ���� ��� ������ ������ ��� ����������: ");

    }


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
