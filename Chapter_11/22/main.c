#include <stdio.h>
#include <string.h>
#include <windows.h>
#define WORDS 4
#define CHARACTER 80
#define STOP "�����"
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char * s_gets(char * str, int n);
    char dialog[WORDS][CHARACTER];
    int n_str=0;
    printf("��t���� %d ������ �� %d �������� ��� ����� ��� ������.\n", WORDS, CHARACTER);
    while(n_str<WORDS && s_gets(dialog[n_str], CHARACTER)!=NULL && strcmp(dialog[n_str], STOP) && dialog[n_str][0]!='\0')
    {
        puts(dialog[n_str]);
        n_str++;
    }

    puts("��������� ���������.");



    return 0;
}
char * s_gets(char * str, int n)
{
    char * result;
    int i=0;
    result=fgets(str, n, stdin);
    if(*result)
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
