#include <stdio.h>
#include <windows.h>
//#define PI 3.13159

float diametr, circuit, plane;
const float PI = 3.141519;

int main (void)
{
    SetConsoleOutputCP(1251);
    printf("¬ведите диаметр пиццы в сантиметрах:______\b\b\b\b\b\b");
    scanf("%f", &diametr);
    circuit = PI * diametr;
    plane = PI * (diametr/2)*(diametr/2);
    printf("ƒлина окружности пиццы = %.2f см, площадь = %f см2.", circuit, plane);



    return 0;
}
