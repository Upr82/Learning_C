#include <stdio.h>
#include <windows.h>

float v_m_bit, size_m_byte, t;

int main (void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("������� ������ ����� � ���������� � �������� ");
    printf("�������� � ��������� � �������:");
    scanf("%f%f", &size_m_byte, &v_m_bit);
    t = (size_m_byte*8)/v_m_bit;
    printf("��� �������� �������� %.2f ������� � ������� ���� �������� %.2f ��������\n", v_m_bit, size_m_byte);
    printf("����������� �� %.2f ������.", t);



    return 0;
}
