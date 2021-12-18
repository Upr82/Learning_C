#include <stdio.h>
#include <windows.h>

int a;
float b;
char name [40];


int main (void)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    printf("Укажите свой возраст, вес и имя:");
    scanf("%d %f %s", &a, &b, name);
    printf("Имя: %s, вес: %.1f, лет: %d", name, b, a);




    return 0;
}
