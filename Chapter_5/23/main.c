#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long sum = 0L;
long num;
int input;


int main()
{
    SetConsoleOutputCP(1251);
    printf("Программа сложения введённых чисел.\n");
    printf("Введите первое число (для выхода q): ");
    input = scanf("%ld", &num);
    while (input>0)
    {
        sum = sum + num;
        printf("Введите следующее число (для выхода q): ");
        input = scanf("%ld", &num);

    }
    printf("Сумма введённых чисел равна %ld.\n", sum);






    return 0;
}
