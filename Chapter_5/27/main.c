#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


long sum = 0L;
long num;
_Bool status;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Программа сложения чисел\n");
    printf("Введите число (для выхода q): ");
    status = scanf("%ld", &num)==1;
    while (status)
    {
        sum = sum + num;
        printf("Введите число (для выхода q): ");
        status = scanf("%ld", &num)==1;

    }
    printf("Сумма введённых чисел = %ld.\n", sum);



    return 0;
}
