#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int min;
int hour;
const int MIN_PER_HOUR = 60;

int main()
{
    SetConsoleOutputCP(1251);
    printf("��������� �������� ����� � ���� � ������.\n");
    printf("������� ���������� �����, ��� ������ ������� 0 ��� ������������� �����:");
    scanf("%d", &min);
    while (min>0)
    {
        printf("%d ����� ��� %d ����� � %d �����.\n", min, min/MIN_PER_HOUR, min%MIN_PER_HOUR);
        printf("������� ���������� �����, ��� ������ ������� 0 ��� ������������� �����:");
        scanf("%d", &min);
    }
    return 0;
}
