#include <stdio.h>
#include <stdlib.h>

int count=0;//����������� ���������� � ������� �����������
void report(void);//�������� �������
void accumulate(int k);//�������� �������

int main()
{
    system("chcp 1251");
    int value;//���������� � �������������� �������, ������� � �����
    register int i;//���������� ��������������� ������, ������� � �����, � ������� ��������
    printf("������� ����� ����� (��� ������ 0): ");
    while(scanf("%d", &value)==1 && value>0)
    {
        for(i=value;i>=0;i--)
            accumulate(i);
        printf("������� ����� ����� (��� ������ 0): ");
    }
    report();

    //printf("Hello world!\n");
    return 0;
}
void report(void)
{
    printf("���� �������� %d ���.\n", count);//����� �������� ����������� ��������� � ������� �����������
}
