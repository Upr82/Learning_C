#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20


int main()
{
    system("chcp 1251");
    char *s_gets(char *str, int n);
    char number[SIZE];
    char *symbol;
    long answer;
    puts("������� ����� ����, ��� ������ - ������ ������.");
    while(s_gets(number,SIZE) && number[0]!='\0')
    {
        answer=strtol(number, &symbol, 10);
        printf("�������� ����� � 10 ������� = %ld. �� ����������� �� %s(%d).\n",answer, symbol, *symbol);
        answer=strtol(number, &symbol, 16);
        printf("�������� ����� � 16 ������� = %ld. �� ����������� �� %s(%d).\n",answer, symbol, *symbol);

        puts("������� ����� ����, ��� ������ - ������ ������.");
    }






    return 0;
}
char *s_gets(char *str, int n)
{
    char *result;
    int i=0;
    result=fgets(str, n, stdin);
    if (result)
        {
            while(str[i]!='\0' && str[i]!='\n')
                i++;
            if(str[i]=='\n')
                str[i]='\0';
            else while(getchar()!='\n')
                continue;
        }

    return result;
}
