#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

const int DAY_PER_WEEK = 7;
int days, weeks;

int main()
{
    SetConsoleOutputCP(1251);
    printf("������� ���������� ���� (��� ������ 0 ��� -):");
    scanf("%d", &days);
    while (days>0)
    {
        printf("%d ���� ��� %d ������ � %d ����.\n", days, days/DAY_PER_WEEK, days%DAY_PER_WEEK);
        printf("������� ���������� ���� (��� ������ 0 ��� -):");
        scanf("%d", &days);
    }
    return 0;
}
