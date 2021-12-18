#include <stdio.h>
#include <windows.h>

extern int count;//ссылочное объявление переменной с внешним связыванием

static int total=0;//объявление статической переменной с внутренним связыванием

void accumulate(int k);//прототип ф-ии
void accumulate(int k)
{
    static int subtotal=0;//статическая переменная, видимая в блоке
    if(k<=0)
    {
        printf("итерация цикла: %d\n", ++count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal=0;
    }
    else
    {
        subtotal +=k;
        total+=k;
    }

}

