#include <stdio.h>
#include <windows.h>

extern int count;//��������� ���������� ���������� � ������� �����������

static int total=0;//���������� ����������� ���������� � ���������� �����������

void accumulate(int k);//�������� �-��
void accumulate(int k)
{
    static int subtotal=0;//����������� ����������, ������� � �����
    if(k<=0)
    {
        printf("�������� �����: %d\n", ++count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal=0;
    }
    else
    {
        subtotal +=k;
        total+=k;
    }

}

