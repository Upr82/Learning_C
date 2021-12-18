#include <stdio.h>
#include <stdlib.h>
#define N 2
#define SIZE 40

struct order
{
    char bankname[SIZE];
    float bank;
    char savename[SIZE];
    float save;
};
void showinfo(const struct order ar[], int n);
int main()
{
    struct order sag[N]=
    {
        {
            "Bank 1",
            111.1,
            "Bank 2",
            222.2
        },
        {
            "Bank 3",
            333.3,
            "Bank 4",
            444.4
        }
    };

    showinfo(sag, N);

    printf("\nHello world!\n");
    return 0;
}
void showinfo(const struct order ar[], int n)
{
    float sum=0.0;
    int i;

    for(i=0;i<n;i++)
    {
        sum+=ar[i].bank;
        sum+=ar[i].save;
    }
    printf("Sum orders = %g\n", sum);
}
