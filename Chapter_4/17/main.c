#include <stdio.h>
#include <windows.h>
#define BOOK "����� � ���"

int main (void)
{
    float cost = 12.99;
    float percent = 80.2;
    SetConsoleOutputCP(1251);

    printf("������ ��������� ����� \"%s\" ����� $%.2f.\n", BOOK, cost);
    printf("��� %.0f%% �� ���� � �����-�����.", percent);


    return 0;
}
