#include <stdio.h>
#include <limits.h>
#include <float.h>


int main (void)
{
    SetConsoleOutputCP(1251);
    printf("Некоторые возможности данной системы.\n");
    printf("Размер байта: %d бит\n", CHAR_BIT);
    printf("Минимум типа CHAR: %d\n", CHAR_MIN);
    printf("Максимум типа CHAR: %d\n\n", CHAR_MAX);

    printf("Размер типа SHORT: %d байт\n", sizeof(short));
    printf("Минимум типа SHORT: %d\n", SHRT_MIN);
    printf("Максимум типа SHORT: %d\n\n", SHRT_MAX);

    printf("Размер типа INT: %d байт\n", sizeof(int));
    printf("Минимум типа INT: %d\n", INT_MIN);
    printf("Максимум типа INT: %d\n\n", INT_MAX);

    printf("Размер типа LONG: %d байт\n", sizeof(long));
    printf("Минимум типа LONG: %ld\n", LONG_MIN);
    printf("Максимум типа LONG: %ld\n\n", LONG_MAX);

    printf("Размер типа LONG LONG: %d байт\n", sizeof(long long));
    printf("Минимум типа LONG LONG: %lld\n", LLONG_MIN);
    printf("Максимум типа LONG LONG: %lld\n\n", LLONG_MAX);

    printf("Размер типа UNSIGNED LONG LONG: %d байт\n", sizeof(unsigned long long));
    printf("Максимум типа LONG LONG: %llud\n\n", ULLONG_MAX);

    printf("Размер типа FLOAT: %d байт\n", sizeof(float));
    printf("Минимальное количество символов в мантиссе: %d\n", FLT_DIG);
    printf("Минимум типа FLOAT: %E\n", FLT_MIN);
    printf("Максимум типа FLOAT: %E\n", FLT_MAX);
    printf("Минимальная экспонента: %d\n", FLT_MIN_10_EXP);
    printf("Максимальная экспонента: %d\n", FLT_MAX_10_EXP);

    printf("Размер типа DOUBLE: %d байт\n", sizeof(double));
    printf("Минимальное количество символов в мантиссе: %d\n", DBL_DIG);
    printf("Минимум типа DOUBLE: %E\n", DBL_MIN);
    printf("Максимум типа DOUBLE: %E\n", DBL_MAX);
    printf("Минимальная экспонента: %d\n", DBL_MIN_10_EXP);
    printf("Максимальная экспонента: %d\n", DBL_MAX_10_EXP);



    //getchar();
    getchar();
    return 0;
}
