#include <stdio.h>
#include <windows.h>

int a=0, b=0;

int main (void)
{
    SetConsoleOutputCP(1251);
    label_1:    printf("¬ведите а: ");
    scanf("%d", &a);
    printf("¬ведите b (должно быть меньше а): ");
    scanf("%d", &b);
    if (a<b) goto label_1;
    printf("%d (a) - %d (b) = %d.\n", a, b, a-b);

    return 0;
}
