#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long sum = 0L;
long num;
int input;


int main()
{
    SetConsoleOutputCP(1251);
    printf("��������� �������� �������� �����.\n");
    printf("������� ������ ����� (��� ������ q): ");
    input = scanf("%ld", &num);
    while (input>0)
    {
        sum = sum + num;
        printf("������� ��������� ����� (��� ������ q): ");
        input = scanf("%ld", &num);

    }
    printf("����� �������� ����� ����� %ld.\n", sum);






    return 0;
}
