#include <stdio.h>
#include <stdlib.h>
#define N 2
#define LEN 20

struct orders
{
    char bank[LEN];
    float fbank;
    char save[LEN];
    float fsave;
};

float sum(const struct orders *temp, int n);

int main()
{
    system("chcp 1251");
    float f;

    struct orders shpak[N]={
    {
        "Дебитовый",1.11,
        "Накопительный", 2.22
    },
    {
        "Дебитовый 2", 3.33,
        "Накопительный 2", 4.44
    }
    };
    f=sum(shpak, N);
    printf("Сумма на счетах = %g\n", f);


    printf("Hello world!\n");
    return 0;
}
float sum(const struct orders *temp, int n)
{
    float sum=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        printf("На счете %s находится %g рублей\n",
               (temp+i)->bank, (temp+i)->fbank);
        printf("На счете %s находится %g рублей\n",
               (temp+i)->save, (temp+i)->fsave);
        sum+=(temp+i)->fbank + (temp+i)->fsave;
    }
    return sum;
}
