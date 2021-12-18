#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

struct orders {
char bank[SIZE];
float bankfund;
char save[SIZE];
float savefund;
};

float sum(const struct orders *);
int main()
{
    struct orders shag =
    {
        "Bank 1", 1.11,
        "Bank 2", 2.22
    };
    struct orders shag2 = shag, *my_s = &shag2;

    printf("Sum orders = %g.\n", sum(my_s));
    return 0;
}

float sum(const struct orders *temp)
{
    return (temp->bankfund + temp->savefund);
}
