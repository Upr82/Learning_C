#include <stdio.h>
#include <stdlib.h>
#define NAME_SIZE 20
#define NAME_TARIF 40

struct names
{
    char first[NAME_SIZE];
    char second[NAME_SIZE];
};

struct orders
{
    struct names sag;
    char debit_tarif[NAME_TARIF];
    float debit_order;
    char save_tarif[NAME_TARIF];
    float save_order;
    float summa;
};

void sum(float a, float b, float *c);

int main()
{
    system("chcp 1251");
    struct orders my_orders =
    {
        {"�����","����"},
        "��������� - \"������� ����.\"",
        111.11,
        "������������� - \"������ �����!\"",
        222.22
    };

    printf("��������� %s %s.\n", my_orders.sag.first, my_orders.sag.second);
    printf("�� ����� %s ��������� %g ������.\n", my_orders.debit_tarif, my_orders.debit_order);
    printf("�� ����� %s ��������� %g ������.\n", my_orders.save_tarif, my_orders.save_order);
    //printf("����� ������� �� ���� ����� ������ %g $.\n", sum(my_orders.debit_order,my_orders.save_order));
    printf("����� ������� �� ���� ����� ������ %g $.\n", my_orders.summa);

    sum(my_orders.debit_order,my_orders.save_order, &my_orders.summa);

    printf("����� ������� �� ���� ����� ������ %g $.\n", my_orders.summa);

    printf("\nEnd!\n");
    return 0;
}
void sum (float a, float b, float *c)
{
    *c= a+b;
}
