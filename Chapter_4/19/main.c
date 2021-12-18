#include <stdio.h>
#include <windows.h>


int main (void)

{
    float h;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("¬ведите число с плавающей точкой:");
    scanf("%f", &h);
    printf("„исло: %.1f или %.1e\n", h, h);
    printf("„исло: %+.3f или %.3E", h, h);





    return 0;
}
