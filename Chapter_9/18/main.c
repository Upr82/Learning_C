/* ��� ��������� ���������� ������������ ������ ��� ����� �����
���� double � ���������� �1, 2 � 3, ����� ���� ��������� ��������
�������� � ������� �����������*/

#include <stdio.h>

void sort(double * p1, double * p2, double * p3);

int main(void)
{
    double a,b, c;
    printf("Enter double number #1 and #2 and #3: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Before function: a = %g, b = %g, c = %g\n", a, b, c);
    sort(&a,&b, &c);
    printf("After function: a = %g, b = %g, c = %g\n", a, b, c);

    return 0;
}

void sort(double * p1, double * p2, double * p3)
{
    double min;
    /*if(*p1>*p2) //���������� ��� ������ �����
    {           //���� �2 ������ �1 - ������ �������� �������
       min=*p2;
       *p2=*p1;
       *p1=min;
    }
    if(*p3<*p1 && *p3<*p2)//���� �3 ������ �1 � �2,
    {//����� �2 � �1����������� �� �3 � �2, � �������� �3 ������ �1
        min=*p3;
        *p3=*p2;
        *p2=*p1;
        *p1=min;
    }
    if(*p3>*p1 && *p3<*p2)//���� �3 ������ �1 �� ������ �2,
    {//������ ������� �������� �2 � �3
        min=*p3;
        *p3=*p2;
        *p2=min;
    }*/

    if (*p1 > *p2)
        {
            *p1 = *p1 + *p2 ;
            *p2 = *p1 - *p2 ;
            *p1 = *p1 - *p2 ;
        }
    if (*p2 > *p3)
        {
            *p2 = *p2 + *p3 ;
            *p3 = *p2 - *p3 ;
            *p2 = *p2 - *p3 ;
        }
    if (*p1 > *p2)
        {
            *p1 = *p1 + *p2 ;
            *p2 = *p1 - *p2 ;
            *p1 = *p1 - *p2 ;
        }

}

