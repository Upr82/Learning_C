#include <stdio.h>
#include <windows.h>

int main (void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char name [40];
    float h;

    printf("Введите Ваш рост в сантиметрах и имя:");
    scanf("%f %s", &h, name);
    printf("%s, Ваш рост %.2f метра.", name, h/100);



    return 0;
}
