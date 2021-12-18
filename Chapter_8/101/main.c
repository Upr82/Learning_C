#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool bad_param(long, long, long, long);
long get_long(void);
double sum_square(long, long);

int main()
{
    system("chcp 1251");
    const long MIN=-1000L, MAX=1000L;
    long start, stop;
    printf("��������� ��� ���������� ����� ��������� ����� �����.\n");
    printf("������� ����� �� %ld �� %ld, 0 � ����� ������ ��� ������.\n", MIN, MAX);
    printf("������� ������ �����: ");
    start=get_long();
    printf("������� ������ �����: ");
    stop=get_long();
    while(start!=0 || stop!=0)
    {
        if(bad_param(start, stop, MIN, MAX)==false)
        {
            printf("����� ��������� ����� ����� �� %ld �� %ld ����� %g.\n", start, stop,
                   sum_square(start, stop));
        }
        printf("������� ����� �� %ld �� %ld, 0 � ����� ������ ��� ������.\n", MIN, MAX);
        printf("������� ������ �����: ");
        start=get_long();
        printf("������� ������ �����: ");
        stop=get_long();
    }
    printf("End!\n");
    return 0;
}
long get_long(void)
{
    long result;
    char ch;
    while(scanf("%ld", &result)!=1)
    {
        while((ch=getchar())!='\n')
            putchar(ch);
        printf(" ������! ��� �� ������� ����� ������.\n");
        printf("������� ����� �����!\n");
    }
    return result;
}
bool bad_param(long start, long stop, long min, long max)
{
    bool bad_result=false;
    if(start>stop)
    {
        printf("��������� ����� �� ������ ���� ������ ���������.\n");
        bad_result=true;
    }
    if((start<min)||(stop<min))
    {
        printf("��� ����� �� ������ ���� ������ %ld.\n", min);
        bad_result=true;
    }
    if((start>max)||(stop>max))
    {
        printf("��� ����� �� ������ ���� ������ %ld.\n", max);
        bad_result=true;
    }
    return bad_result;
}
double sum_square(long a, long b)
{
    double sum=0.0;
    int i;
    for(i=a;i<=b;i++)
        sum+=(double)i*(double)i;
    return sum;
}
