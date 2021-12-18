#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define DATA 3
#define STRING 11
#define ABB 4
#define ALL_MONTHS 12

struct month {
char name[STRING];
char abb[ABB];
int day;
int num;
};

struct month months[ALL_MONTHS]= {
{"������","���",31,1},
{"�������","���",28,2},
{"March","MAR",31,3},
{"April","APR",30,4},
{"���","���",31,5},
{"����","���",30,6},
{"����","���",31,7},
{"������","���",31,8},
{"��������","���",30,9},
{"�������","���",31,10},
{"������","���",30,11},
{"�������","���",31,12}
};


char *s_gets(char *str, int n);
int getinfo(char *str, int arr[], int n);
void clean_string(char *str, int n);
int calc(struct month *st, int *arr);

int main()
{
    system("chcp 1251");
    int data[DATA];
    int ansv=0;
    char string[STRING];
    int count=0;

    printf("��������� ���������� ���������� ���� �� ������ ����\n");
    printf("�� �������� ����.\n\n");
    clean_string(string, STRING);

    printf("������� ������ ���� � ������� ��.��.���� :");
    while(s_gets(string, STRING)!=NULL && string[0]!='\0')
    {
        ansv=getinfo(string, data, DATA);
        if(ansv)
            printf("������ ����� ������!\n");
        else
        {
            printf("�� ����� ���� %d %d %d.\n", data[0], data[1], data[2]);//��������

            count=calc(months, data);
            printf("�� 01.01.%d ���� �� %d.%d.%d %d ����.\n\n", data[2], data[0],data[1],data[2], count);


        }
        clean_string(string, STRING);
        printf("������� ������ ���� � ������� ��.��.���� :");
    }

    printf("\nHello world!\n");
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
int getinfo(char *str, int arr[], int n)
{
    int result=0;

    arr[0]=atoi(str);
    if (arr[0]<1 || arr[0]>31)
        result=1;

    arr[1]=atoi(str+3);
    if (arr[1]<1 || arr[1]>12)
        result=2;

    arr[2]=atoi(str+6);
    if (arr[2]<2000 || arr[2]>2100)
        result=3;

    return result;
}
void clean_string(char *str, int n)
{
    int i;
    for(i=0;i<n;i++)
        str[i]='\0';
}
int calc(struct month *st, int *arr)
{
    int result=0, i;

    result+=arr[0];

    for(i=0;i<arr[1]-1;i++)
        result += (st+i)->day;

    if((arr[2]%4)==0 && arr[1]>2)
        result++;

    return result;
}
