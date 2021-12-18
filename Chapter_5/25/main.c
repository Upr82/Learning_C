#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

const double pi = 3.14159;
double response;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Чему равно число Пи?\n");
    scanf("%lf", &response);

    while (fabs(response - pi)>0.0001)
    {
        printf ("Не точно! Вводите ещё.\n");
        scanf("%lf", &response);

    }
    printf("Теперь точно!\n");



    return 0;
}
