#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
const float FREEZING=0.0;
float tem;
int all_days=0, cold_days=0;

int main()
{
    SetConsoleOutputCP(1251);
    printf("��������� ���������� ����� ���������� ���� � ������� ���� � �<0.\n");
    printf("������� ����������� ����������� ��� (��� ������ q): ");
    while(scanf("%f", &tem)==1)
    {
        all_days++;
        if(tem<FREEZING) cold_days++;
    }
    if(all_days!=0) printf("����� %d ����, �� ��� %5.2f%% � ���� < 0 �.", all_days, 100.0*((float)cold_days/all_days));
    if(all_days==0) printf("������ �� �������.");








    return 0;
}
