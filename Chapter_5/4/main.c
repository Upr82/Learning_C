#include <stdio.h>
#include <windows.h>
#define SEC_PER_MIN 60

int min, sec, left;

int main (void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    printf("��������� �������� ������ � ������ � �������.\n");
    printf("������� ��������� ������ (��� ������ ������� ������������� �����):");
    scanf("%d", &sec);
    while (sec>=0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d ������ ��� %d ����� %d ������.\n", sec, min, left);
        printf("������� ��������� ������ (��� ������ ������� ������������� �����):");
        scanf("%d", &sec);
    }




    return 0;
}
