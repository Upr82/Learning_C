#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME 15
#define SLENGHT 100

struct names
{
    char first[NAME];
    char second[NAME];
};

struct wifes
{
    struct names n_s;
    float weight;
    float lenght;
};

float sum(struct wifes aut);

int main()
{
    char my_string[SLENGHT];
    struct wifes curr =
    {
        {"Наталия","Шпак"},
        61.5,
        173.2
    };

    system("chcp 1251");

    printf("У %s %s сумма веса и роста = %g.\n",
           curr.n_s.first, curr.n_s.second,
           sum(curr));
    /*sprintf(my_string,"У %s %s сумма веса и роста = %g.\n",
           curr.n_s.first, curr.n_s.second, sum(curr));

    for(int i=0;i<SLENGHT;i++)
        printf("[%2d] = %c =%d\n", i, my_string[i], my_string[i]);*/

    printf("Hello world!\n");
    return 0;
}

float sum(struct wifes aut)
{
    return (aut.weight + aut.lenght);
}
