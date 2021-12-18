#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

const long MIN = -10000000;
const long MAX = 10000000;

long start, stop;

long get_long(void);

bool bad_limits(long begin, long end, long low, long high);

double sum_squares (long a, long b);


int main(void)
{
    SetConsoleOutputCP(1251);
    printf("Это программа сложения квадратов целых чисел в указанном диапазоне.\n");
    printf("Минимум диапазона = %ld, максимум диапазона %ld.\n",
           MIN, MAX);
    printf("Для завершения программы укажите 0 для обоих значений.\n");
    printf("Введите нижний предел диапазона: ");
    start= get_long();
    printf("Введите верхний предел диапазона: ");
    stop = get_long();

    while (start!=0 || stop!=0)
    {
        if (bad_limits(start, stop, MIN, MAX))
        {
            printf("Попробуйте ещё раз.\n");
        } else
        {
            printf("Сумма квадратов указанного диапазона = %.0f.\n", sum_squares(start, stop));
        }
        printf("\nЭто программа сложения квадратов целых чисел в указанном диапазоне.\n");
        printf("Минимум диапазона = %ld, максимум диапазона %ld.\n",
           MIN, MAX);
        printf("Для завершения программы укажите 0 для обоих значений.\n");
        printf("Введите нижний предел диапазона: ");
        start= get_long();
        printf("Введите верхний предел диапазона: ");
        stop = get_long();
    }

    return 0;
}

long get_long(void)
{
    long input;
    char ch;
    while (scanf("%ld", &input)!=1)
    {
        while((ch=getchar())!='\n')
            putchar(ch);
        printf("\nНужно вводить целые положительные числа.\n");
    }
    return input;
}

bool bad_limits (long begin, long end, long low, long high)
{
    bool not_god = false;
    if (begin>end)
    {
        printf("Неправильно! Первое число больше второго.\n");
        not_god=true;
    }
    if (begin<low || end<low)
    {
        printf("Неправильно! Одно или оба чилса меньше нижнего предела.\n");
        not_god=true;
    }
    if (begin>high || end>high)
    {
        printf("Неправильно! Одно или оба числа больше верхнего предела.\n");
        not_god=true;
    }

    return not_god;
}

double sum_squares (long a, long b)
{
    double sum=0.0;
    long i;
    for (i=a; i<=b;i++)
        sum += i*i;
    return sum;
}
