#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(1251);
    printf("Hello world!\n");
    int uncii;
    float cost;
    const float FIR_OZ = 0.46;
    const float SEC_OZ = 0.2;

    for (uncii=1, cost=FIR_OZ; uncii<=10; uncii++, cost += SEC_OZ)
        printf("%5d $%5.2f\n", uncii, cost);
    printf("Вот и всё!");


    return 0;
}
