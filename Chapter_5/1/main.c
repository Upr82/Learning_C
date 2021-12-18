#include <stdio.h>
#include <windows.h>
#define DELTA 7.31


int main (void)
{
    float foot, scale, num_size;
    scale = 0.333;
    num_size = 3.0;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Размер мужской обуви   кол-во дюймов\n");
    while (num_size < 18.5)
    {
        foot = num_size*scale + DELTA;
        printf("%20.f", num_size);
        printf("%16.2f\n", foot);
        num_size = num_size + 1;

    }
    printf("Носите удобную обувь!");




    return 0;
}
