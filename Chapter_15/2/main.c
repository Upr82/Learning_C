#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


char *getinfo(char *str, int n);
void show(char *str);
int rev(int n, int bits);
int size;

int main()
{
    system("chcp 1251");
    char arr[CHAR_BIT*sizeof(int)+1];
    int num, bits;

    size=CHAR_BIT*sizeof(int);

    printf("Введите число типа int и количество последних битов для инверсии: ");
    while(scanf("%d %d", &num, &bits)==2)
    {
        while(getchar()!='\n')
            continue;
        getinfo(arr, num);

        printf("Вот это число в двоичном виде:\n" );
        show(arr);

        num=rev(num, bits);
        getinfo(arr, num);
        printf("Получившееся число %d в двоичном виде после инверсии %d последних битов:\n",num, bits);
        show(arr);

        printf("\nВведите число типа int и количество последних битов для инверсии: ");
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
        if((++i%8)==0)
            putchar(' ');
    }
    putchar('\n');
}
char *getinfo(char *str, int n)
{
    int i;
    str[size]='\0';

    for(i=size-1;i>=0;i--, n>>=1)
        str[i]='0' + (n & 0x1);

    return str;
}
int rev(int n, int bits)
{
    int mask=0;
    int bitval=1;
    while(bits-- >0)
    {
        mask|=bitval;
        bitval<<=1;
    }

    n^=mask;
    return n;
}
