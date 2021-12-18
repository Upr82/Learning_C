#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float depositA = 100.0, depositN = 100.0;
const float stavkaA = 10.0, stavkaN = 1.05;

int i;

int main()
{
    SetConsoleOutputCP(1251);
    printf("Антон положил на вклад $100  под простые 10%%,\n");
    printf("а Наташа положила $100  под сложные 5%%.\n");
    printf("Через сколько лет сумма на счету Наташи, превысит\n");
    printf("сумму на счету Антона. Какие это будут суммы?\n");

    for (i=1; depositA>= depositN;i++)
    {
        depositA += stavkaA;
        depositN *= stavkaN;
        printf("После %2d года (лет) депозит Антона = $%g, депозит Наташи = $%g\n", i,
               depositA, depositN);
    }






    return 0;
}
