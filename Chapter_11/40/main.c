#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40

int main()
{
    system("chcp 1251");
    char name[SIZE];
    int s_trlen(char *str);

    puts("����� ������ � �������� � �����, ��� ������ ������ ������.");
    while(fgets(name, SIZE, stdin) && name[0]!='\0')
    {
        printf("����� = %d.\n", s_trlen(name));
        puts("����� ������ � �������� � �����, ��� ������ ������ ������.");
    }

    printf("End!\n");
    return 0;
}
int s_trlen(char *str)
{
    int i=0;
    while(str[i]!='\0')
        i++;
    return i;
}
