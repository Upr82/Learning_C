#include <stdio.h>
#include <stdlib.h>
#define BANKLEN 40

struct funds
{
    char bank[BANKLEN];
    double bankfund;
    char save[BANKLEN];
    double savefund;
};

double sum(struct funds *poi);

int main()
{
    struct funds sten =
    {
        "��������� - \"��� ����� ������������\"",
        111.11,
        "������������� - \"��� ��������\"",
        222.22
    };

    //struct funds *ps = &sten;

    system("chcp 1251");

    printf("�� �����: %-30s = %g ������\n", sten.bank, sten.bankfund);
    printf("�� �����: %-30s = %g ������\n", sten.save, sten.savefund);

    printf("�� ���� ������ %g ������.\n", sum(&sten));



    printf("Hello world!\n");
    return 0;
}
double sum(struct funds *poi)
{
    return (poi->bankfund + poi->savefund);
}
