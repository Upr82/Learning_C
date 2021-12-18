#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    int n=8;

    printf("Переменная вне блоков n = %d по адресу %p\n", n, &n);

    for(int n=1;n<3;n++)
        printf("\tВнутри цикла №1, n = %d по адресу %p\n", n, &n);

    printf("Переменная вне блоков n = %d по адресу %p\n", n, &n);

    for(int n=1;n<3;n++)
    {
        printf("\tВнутри цикла №2, n = %d по адресу %p\n", n, &n);
        {
            int n=22;
            printf("\t\tБлок внутри цикла №2, n = %d по адресу %p\n", n, &n);
            n++;
        }
    }

    printf("Переменная вне блоков n = %d по адресу %p\n", n, &n);


    return 0;
}
