#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    int x=1;

    printf("¬нешн€€ переменна€ х = %d по адресу %p\n", x, &x);
    {
        int x=77;
        printf("¬нутренн€€ переменна€ х = %d по адресу %p\n", x, &x);
    }
    printf("¬новь внешн€€ перемнна€ х = %d по адресу %p\n", x, &x);
    while(x++<10)
    {
        int x=100;
        printf("ѕеременна€ х внутри цикла = %d по адресу %p\n", x, &x);
        x++;
    }
    printf("¬новь внешн€€ перемнна€ х = %d по адресу %p\n", x, &x);

    return 0;
}
