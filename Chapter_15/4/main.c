#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char *itostr(char *str, int n, int arg);
int revers(int arg, int b);
void show(char *str, int n);

int main()
{
    system("chcp 1251");
    const int SIZE=CHAR_BIT*sizeof(int)+1;
    char arr[SIZE];
    int num, bit;

    printf("¬ведите целое число и количество бит(дл€ выхода букву): ");
    while(scanf("%d %d", &num, &bit)==2)
    {
        while(getchar()!='\n')
            continue;
        itostr(arr, SIZE, num);
        show(arr, SIZE);

        num=revers(num, bit);
        itostr(arr, SIZE, num);
        show(arr, SIZE);

        printf("¬ведите целое число (дл€ выхода букву): ");
    }

    printf("\nEnd3!\n");
    return 0;
}
char *itostr(char *str, int n, int arg)
{
    int i, mask=0x1;
    str[n-1]='\0';
    for(i=n-2;i>=0;i--,arg>>=1)
    {
        str[i]='0'+ (arg & mask);
    }
    return str;
}
void show(char *str, int n)
{
    int i;
    for(i=0;i<n;i++)
    {

        if((i%8)==0)
            putchar(' ');
        printf("%c", str[i]);
    }
    putchar('\n');
}
int revers(int arg, int b)
{
    int i, m=0, one=1;
    for(i=0;i<b;i++)
    {

        m|=one;
        one<<=1;
    }

    return arg^m;
}
