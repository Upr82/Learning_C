#include <stdio.h>
#include <windows.h>


int main (void)
{
    unsigned width, precision;
    int number = 256;
    int b;
    float a = 123.4567;

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    printf("������� ������ ���� ��� ������ �����: ");
    scanf("%u", &width);
    printf("����� number = %0*d\n", width, number);
    printf("������ ������ ���� � �������� ��� ����� � ��������� ������: ");
    b = scanf("%u %u", &width, &precision);
    printf("����� � = %0*.*f\n", width, precision, a);

    printf("����� ��������� �������� ���������� ����� = %d", b);




    return 0;
}
