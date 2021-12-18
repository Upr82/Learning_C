#include <stdio.h>
#include <windows.h>
#define BOOK "Война и мир"

int main (void)
{
    float cost = 12.99;
    float percent = 80.2;
    SetConsoleOutputCP(1251);

    printf("Данный экземпляр книги \"%s\" стоит $%.2f.\n", BOOK, cost);
    printf("Это %.0f%% от цены в прайс-листе.", percent);


    return 0;
}
