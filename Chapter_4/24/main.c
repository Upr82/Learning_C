#include <stdio.h>
#include <windows.h>
#define GAL_LITRES 3.785
#define MIL_KILO 1.609

float miles, gallons, miles_1_gallon;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("������� ���������� ������������ ���� � ���������������� �������:");
    scanf("%f %f", &miles, &gallons);
    miles_1_gallon = miles/gallons;
    printf("�� 1 ������� �������� %.1f ����.\n", miles_1_gallon);
    printf("���� ������ ����� %.1f ������/100��.\n", ((gallons * GAL_LITRES)*100)/(miles * MIL_KILO));






    return 0;
}
