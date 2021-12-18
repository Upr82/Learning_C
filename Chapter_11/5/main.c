#include <stdio.h>
#include <windows.h>
#define SIZE 5
#define LENGHT 40

int main(void)
{
    SetConsoleOutputCP(1251);
    const char *mytalents [SIZE]={
    "������ � ����� ������",
    "�������� ����������",
    "����� ������� ������ ������",
    "���� ��� ���������",
    "���������� ���������� � ��������� �� �����"};
    char yourtalents[SIZE][LENGHT]={
    "������ ����",
    "���� �� ������",
    "����� ������������",
    "������� �������",
    "������� � ��������"};

    printf("%-52s %-25s\n\n", "��� �������", "���� �������");
    int i;
    for(i=0;i<SIZE;i++)
        printf("%-52s %-25s\n", *(mytalents+i), yourtalents[i]);
    printf("������ = %d ����,                                    ������ = %d ����.\n",
           sizeof(mytalents), sizeof(yourtalents));



    return 0;
}
