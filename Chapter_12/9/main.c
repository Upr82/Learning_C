#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    double *pt;
    int max=0,number,i=0;
    puts("Введите максимальное число элементов массива:");
    if(scanf("%d", &max)!=1 || max<1)
    {
        puts("Ввели некорректное число элементов.");
        exit(EXIT_FAILURE);
    }
    pt=(double *)malloc(max*sizeof(double));
    if(pt==NULL)
    {
        puts("Память под массив не найдена.");
        exit(EXIT_FAILURE);
    }
    puts("Введите значения для элементов, для прекращения введите q.");
    while(i<max && (scanf("%lf",pt+i)==1))
        i++;
    printf("Введено %d элементов.\n", number=i);
    for(i=0;i<max;i++)
    {
        printf("%7.2f", *(pt+i));
        if(i%7==6)
            putchar('\n');
    }
    putchar('\n');
    free(pt);


    printf("Вот и всё!\n");
    return 0;
}
