#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int day, total, rate;

int main()
{
    SetConsoleOutputCP(1251);
    total=0;
    rate=1;
    printf("Каждый день, посуточная оплата увеличивается на 1$/\n");
    printf("Введите число дней работы: ");
    scanf("%d", &day);
    while (rate<=day)
    {
        total = total + rate*rate;
        printf("В день №%-3d ваш заработок = $%-8d, общий заработок = $%-9d.\n", rate, rate*rate, total);
        rate++;
    }
    return 0;
}
