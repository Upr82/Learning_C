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
        "Дебитовый - \"Чем можно пользоваться\"",
        111.11,
        "Накопительный - \"Что накопили\"",
        222.22
    };

    //struct funds *ps = &sten;

    system("chcp 1251");

    printf("На счете: %-30s = %g рублей\n", sten.bank, sten.bankfund);
    printf("На счете: %-30s = %g рублей\n", sten.save, sten.savefund);

    printf("На всех счетах %g рублей.\n", sum(&sten));



    printf("Hello world!\n");
    return 0;
}
double sum(struct funds *poi)
{
    return (poi->bankfund + poi->savefund);
}
