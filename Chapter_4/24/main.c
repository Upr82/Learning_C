#include <stdio.h>
#include <windows.h>
#define GAL_LITRES 3.785
#define MIL_KILO 1.609

float miles, gallons, miles_1_gallon;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Введите количество преодоленных миль и израсходованного бензина:");
    scanf("%f %f", &miles, &gallons);
    miles_1_gallon = miles/gallons;
    printf("На 1 галлоне пройдено %.1f миль.\n", miles_1_gallon);
    printf("Этот расход равен %.1f литров/100км.\n", ((gallons * GAL_LITRES)*100)/(miles * MIL_KILO));






    return 0;
}
