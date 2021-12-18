#include <stdio.h>
#include <stdlib.h>

struct data
{
    int count;
    float average;
    float arr[];
};

int main()
{
    system("chcp 1251");
    int size;
    struct data *ps;

    printf("¬ведите число элементов в гибком массиве: ");
    scanf("%d", &size);
    while(getchar()!='\n')
        continue;

    ps=(struct data *)malloc(sizeof(struct data)+size*sizeof(float));




    free(ps);
    printf("\nEnd!\n");
    return 0;
}
