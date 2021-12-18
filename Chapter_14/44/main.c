#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
#define NUM 2

struct orders {
char bank[SIZE];
float fbank;
char save[SIZE];
float fsave;
};

void show(struct orders temp[], int n);

int main()
{
    struct orders shpak[NUM]={
    {"Bank 1", 1.1, "Save 1", 2.2},
    {"Bank 2", 3.3, "Save 2", 4.4}
    };

    show(shpak, NUM);

    printf("Hello world!\n");
    return 0;
}

void show(struct orders temp[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Orders Shpak # %d\n", i+1);
        printf("Bank: %s\n", temp[i].bank);
        printf("Sum bank = %f\n", temp[i].fbank);
        printf("Save: %s\n", temp[i].save);
        printf("Sum save = %f\n", temp[i].fsave);
    }
}
