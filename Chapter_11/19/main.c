#include <stdio.h>
#include <windows.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 30

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char * s_gets(char *str, int n);
    char flower[SIZE];
    char bug[BUGSIZE];
    char heit[]=" ������ ��� �������!";
    int available;

    puts("����� ������ ��� ��������?");
    s_gets(flower, SIZE);
    if((strlen(flower)+strlen(heit))<SIZE)
    {
        strcat(flower, heit);
        puts(flower);
    }
    else puts("������, ���������� ������������ ������!");
    puts("����� ��������� ��� ��������?");
    s_gets(bug, BUGSIZE);
    available=BUGSIZE - strlen(bug)-1;

        strncat(bug, heit, available);
        puts(bug);

    printf("�������� %d ��������.\n", available);

    return 0;
}
char * s_gets(char *str, int n)
{
   char * result;
   int i=0;
   result=fgets(str, n, stdin);
   if (*result)
   {
    while(str[i]!='\n' && str[i]!='\0')
        i++;
    if (str[i]=='\n')
        str[i]='\0';
    else
        while (getchar()!='\n')
            continue;
   }

    return result;
}
