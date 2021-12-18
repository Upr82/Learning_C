#include <stdio.h>
#include <windows.h>
#define SEC_PER_MIN 60

int min, sec, left;

int main (void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    printf("Программа перевода секунд в минуты и секунды.\n");
    printf("Введите колчество секунд (для выхода введите отрицательное число):");
    scanf("%d", &sec);
    while (sec>=0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d секунд это %d минут %d секунд.\n", sec, min, left);
        printf("Введите колчество секунд (для выхода введите отрицательное число):");
        scanf("%d", &sec);
    }




    return 0;
}
