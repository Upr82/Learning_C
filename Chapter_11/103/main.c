#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5

int main()
{
    system("chcp 1251");
    char name[SIZE];
    puts("������� ������ ��� � ���-������. ��� ������ ������� ^Z.");

    while((fgets(name,SIZE,stdin)!=NULL) && (name[0]!=EOF))
    {
        fputs(name,stdout);
        while(getchar()!='\n')
            continue;
        puts("������� ������ ��� � ���-������. ��� ������ ������� ^Z.");

    }

    printf("End!\n");
    return 0;
}
