/* Эта программа предлагает пользователю ввести три любых числа
типа double в переменные №1, 2 и 3, после чего назначает введённые
значения в порядке возрастания*/

#include <stdio.h>

void sort(double * p1, double * p2, double * p3);

int main(void)
{
    double a,b, c;
    printf("Enter double number #1 and #2 and #3: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Before function: a = %g, b = %g, c = %g\n", a, b, c);
    sort(&a,&b, &c);
    printf("After function: a = %g, b = %g, c = %g\n", a, b, c);

    return 0;
}

void sort(double * p1, double * p2, double * p3)
{
    double min;
    /*if(*p1>*p2) //сравниваем два первых числа
    {           //если №2 меньше №1 - меняем значения местами
       min=*p2;
       *p2=*p1;
       *p1=min;
    }
    if(*p3<*p1 && *p3<*p2)//если №3 меньше №1 и №2,
    {//числа №2 и №1передвигаем на №3 и №2, а значение №3 делаем №1
        min=*p3;
        *p3=*p2;
        *p2=*p1;
        *p1=min;
    }
    if(*p3>*p1 && *p3<*p2)//если №3 меньше №1 но больше №2,
    {//меняем местами значения №2 и №3
        min=*p3;
        *p3=*p2;
        *p2=min;
    }*/

    if (*p1 > *p2)
        {
            *p1 = *p1 + *p2 ;
            *p2 = *p1 - *p2 ;
            *p1 = *p1 - *p2 ;
        }
    if (*p2 > *p3)
        {
            *p2 = *p2 + *p3 ;
            *p3 = *p2 - *p3 ;
            *p2 = *p2 - *p3 ;
        }
    if (*p1 > *p2)
        {
            *p1 = *p1 + *p2 ;
            *p2 = *p1 - *p2 ;
            *p1 = *p1 - *p2 ;
        }

}

