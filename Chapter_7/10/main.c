#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

const int one_cans_S=12;
int cans;
int S;


int main()
{
    SetConsoleOutputCP(1251);
    printf("������� ��������� ������� �����������: ");
    while (scanf("%d", &S)==1)
    {
        cans =S /one_cans_S;
        cans += (S%one_cans_S) ? 1:0;
        printf("��� ���� ������� ��������� %d %s.\n", cans, (cans==1) ? "�����" : "�����");
         printf("������� ��������� ������� �����������: ");

    }



    return 0;
}
