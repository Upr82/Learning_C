#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <ctype.h>

char menu(void);
char choice_menu;
float number1, number2, result;

void summ(float a, float b);
void razn(float a, float b);
void proiz(float a, float b);
void delen(float a, float b);
void input(void);

int main (void)
{
    SetConsoleOutputCP(1251);
    printf("Программа - калькулятор.\n");
    while((choice_menu=menu())!='q')
    {
        switch(choice_menu)
        {
        case 'a':
            input();
            summ(number1, number2);
            break;
        case 'b':
            input();
            razn(number1, number2);
            break;
        case 'c':
            input();
            proiz(number1, number2);
            break;
        case 'd':
            input();
            delen(number1, number2);
            break;
        default:
            printf("Ошибка выбора меню.\n");
        }

    }
    printf("Конец!\n");
    return 0;
}

char menu(void)
{
    char ch;

    printf("Выберете нужный пункт:\n");
    printf("a. Сложение.  b. Вычитание.\n");
    printf("c. Умножение. d. Деление.\n");
    printf("q. Выход.\n");
    while((ch=getchar())<'a' || (ch>'d' && ch!='q'))
    {
        while(getchar()!='\n')
            continue;
        printf("Ошибка! Выберите правильный пункт: ");
    }
    while(getchar()!='\n')
            continue;
    return ch;
}

void input(void)
{
    printf("Введите число №1: ");
    while(scanf("%f", &number1)!=1)
    {
        printf("Ошибка! Введите число №1: ");
        while(getchar()!='\n')
            continue;
    }


    printf("Введите число №2: ");
    while(scanf("%f", &number2)!=1)
    {
        printf("Ошибка! Введите число №2: ");
        while(getchar()!='\n')
            continue;
    }



    if (choice_menu=='d' && number2==0.0)
    {
        printf("Ошибка! На 0 делить нельзя, введите другое число:");
        while(getchar()!='\n')
            continue;

        while(scanf("%f", &number2)!=1 || number2==0.0)
        {
            printf("Ошибка! Введите число №2: ");
            while(getchar()!='\n')
                continue;
        }

    }
    while(getchar()!='\n')
        continue;
}

void summ(float a, float b)
{
    result= a + b;
    printf("%.2f + %.2f = %.2f.\n", a, b, result);
}

void razn(float a, float b)
{
    result= a - b;
    printf("%.2f - %.2f = %.2f.\n", a, b, result);
}

void proiz(float a, float b)
{
    result= a * b;
    printf("%.2f * %.2f = %.2f.\n", a, b, result);
}

void delen(float a, float b)
{
    result= a / b;
    printf("%.2f / %.2f = %.2f.\n", a, b, result);
}
































