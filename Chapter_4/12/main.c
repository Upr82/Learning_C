#include <stdio.h>
#include <limits.h>
#include <float.h>


int main (void)
{
    SetConsoleOutputCP(1251);
    printf("��������� ����������� ������ �������.\n");
    printf("������ �����: %d ���\n", CHAR_BIT);
    printf("������� ���� CHAR: %d\n", CHAR_MIN);
    printf("�������� ���� CHAR: %d\n\n", CHAR_MAX);

    printf("������ ���� SHORT: %d ����\n", sizeof(short));
    printf("������� ���� SHORT: %d\n", SHRT_MIN);
    printf("�������� ���� SHORT: %d\n\n", SHRT_MAX);

    printf("������ ���� INT: %d ����\n", sizeof(int));
    printf("������� ���� INT: %d\n", INT_MIN);
    printf("�������� ���� INT: %d\n\n", INT_MAX);

    printf("������ ���� LONG: %d ����\n", sizeof(long));
    printf("������� ���� LONG: %ld\n", LONG_MIN);
    printf("�������� ���� LONG: %ld\n\n", LONG_MAX);

    printf("������ ���� LONG LONG: %d ����\n", sizeof(long long));
    printf("������� ���� LONG LONG: %lld\n", LLONG_MIN);
    printf("�������� ���� LONG LONG: %lld\n\n", LLONG_MAX);

    printf("������ ���� UNSIGNED LONG LONG: %d ����\n", sizeof(unsigned long long));
    printf("�������� ���� LONG LONG: %llud\n\n", ULLONG_MAX);

    printf("������ ���� FLOAT: %d ����\n", sizeof(float));
    printf("����������� ���������� �������� � ��������: %d\n", FLT_DIG);
    printf("������� ���� FLOAT: %E\n", FLT_MIN);
    printf("�������� ���� FLOAT: %E\n", FLT_MAX);
    printf("����������� ����������: %d\n", FLT_MIN_10_EXP);
    printf("������������ ����������: %d\n", FLT_MAX_10_EXP);

    printf("������ ���� DOUBLE: %d ����\n", sizeof(double));
    printf("����������� ���������� �������� � ��������: %d\n", DBL_DIG);
    printf("������� ���� DOUBLE: %E\n", DBL_MIN);
    printf("�������� ���� DOUBLE: %E\n", DBL_MAX);
    printf("����������� ����������: %d\n", DBL_MIN_10_EXP);
    printf("������������ ����������: %d\n", DBL_MAX_10_EXP);



    //getchar();
    getchar();
    return 0;
}
