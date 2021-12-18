#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
#define N 2

struct orders {
char bank[SIZE];
float fbank;
char save[SIZE];
float fsave;
};

float sum(const struct orders *temp, int n);

int main()
{
    struct orders shpak[N] = {
    {"Bank1", 1.11, "Save1", 2.22},
    {"Bank2", 3.33, "Save2", 4.44}
    };

    printf("Sum funds = %g\n", sum(&shpak[0], N));
    return 0;
}
float sum(const struct orders *temp, int n)
{
    float total=0.0;
    int i;

    for(i=0;i<n;i++)
    {
        total+= temp[i].fbank + temp[i].fsave;
        printf("Fund shpak #%d %s & %s = %g\n",
               i+1, temp[i].bank, (temp+i)->save,
               temp[i].fbank + temp[i].fsave);
    }

    return total;
}
