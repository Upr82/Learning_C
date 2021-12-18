#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 10

enum spectrum {RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET};

char *s_gets(char *str, int n);

int main()
{
    system("chcp 1251");
    enum spectrum color;
    _Bool color_find = false;
    const char *arr_col[]={
    "red","orange","yellow","green","blue","violet"};
    char temp[SIZE];

    printf("Enter your color or (empty string for exit): ");
    while(s_gets(temp, SIZE)!=NULL && temp[0]!='\0')
    {
        for(color=RED;color<=VIOLET;color++)
        {
            if((strcmp(arr_col[color], temp))==0)//��� ����������� !
            {
                color_find=true;
                break;
            }
        }
        if(color_find)
        {
            switch (color)
            {
            case RED:
                puts("���� �������!");
                break;
            case ORANGE:
                puts("��������� ���������!");
                break;
            case YELLOW:
                puts("������ ������!");
                break;
            case GREEN:
                puts("����� ������!");
                break;
            case BLUE:
                puts("���� �����!");
                break;
            case VIOLET:
                puts("������ ����������!");
                break;
            }
        } else printf("���� %s ��� ����������.\n", temp);

        color_find = false;
        printf("Enter your color or (empty string for exit): ");
    }


    printf("Hello world!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result=NULL, *fin=NULL;
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
