#include <stdio.h>
#include <windows.h>
//#define PI 3.13159

float diametr, circuit, plane;
const float PI = 3.141519;

int main (void)
{
    SetConsoleOutputCP(1251);
    printf("������� ������� ����� � �����������:______\b\b\b\b\b\b");
    scanf("%f", &diametr);
    circuit = PI * diametr;
    plane = PI * (diametr/2)*(diametr/2);
    printf("����� ���������� ����� = %.2f ��, ������� = %f ��2.", circuit, plane);



    return 0;
}
