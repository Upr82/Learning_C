#include "main.h"

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

int main()
{
    system("chcp 1251");
    char arr[SIZE];
    int days;

    printf("������� �������� ������ (������ ������ ��� ������): ");
    while(s_gets(arr, SIZE)!=NULL && arr[0]!='\0')
    {
        days=calc(months, ALL_MONTHS, arr);
        if(days)
            printf("�� ������ ���� �� ����� ���������� ������ %d ����.\n", days);
        //else printf("����� � ��������� %s ��� ����������.\n", arr);

        printf("������� �������� ������ (������ ������ ��� ������): ");
    }
    printf("\nHello world!\n");
    return 0;
}
