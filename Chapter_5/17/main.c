#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
const float CM_PER_FOOT = 30.48;
const float CM_PER_INCH = 2.54;
float cm;
int current_foot;

int main()
{
    SetConsoleOutputCP(1251);
    printf("��������� �������� ����������� � ���� � �����.\n");
    printf("������� ������ � �����������: ");
    scanf("%f", &cm);
    while (cm>0)
    {
        current_foot = cm / CM_PER_FOOT;
        printf("%.1f �� = %d ����� � %.1f ������.\n", cm, current_foot, (cm-((float)current_foot*CM_PER_FOOT))/CM_PER_INCH);
        printf("������� ������ � ����������� (<=0 ��� ������ �� ���������): ");
        scanf("%f", &cm);
    }
    printf("������ ���������.\n");
    return 0;
}
