#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

struct book
{
    char name[SIZE];
    float weight;
    float price;
};
float sum(const struct book);

int main()
{
    struct book program = {"Programming", 1.11, 2.22};


    printf("Sum %g + %g = %g\n", program.weight, program.price,sum(program));
    return 0;
}

float sum(const struct book agidel)
{
    return (agidel.weight + agidel.price);
}
