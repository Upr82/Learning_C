#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char *getinfo(char *str, int n);
void show(char *str);

int main()
{
    system("chcp 1251");
    int num;
    char arr[CHAR_BIT*sizeof(int)+1]=
    "01010101010101010101010101010101";

    printf("������� ����� ����� (���������� �������� ��� ������): ");
    while(scanf("%d", &num)==1)
    {
        while(getchar()!='\n')
            continue;
        printf("��� ����� � �����:\n");
        getinfo(arr, num);
        show(arr);

        printf("\n������� ����� ����� (���������� �������� ��� ������): ");
    }
    printf("\nThe end!\n");
    return 0;
}

void show(char *str)
{
    int i=0;
    while(str[i])
    {
        putchar(str[i]);
        if((++i%8)==0 && str[i])
            putchar(' ');
    }
    putchar('\n');
}
char *getinfo(char *str, int n)
{
    int i, size;
    size=CHAR_BIT*sizeof(int);
    str[size]='\0';

    for(i=size-1;i>=0;i--, n>>=1)
        str[i]=(n & 1) + '0';

    return str;
}
