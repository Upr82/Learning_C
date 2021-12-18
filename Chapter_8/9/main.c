#include <windows.h>
#include <ctype.h>
#include <stdio.h>


int get_int(void);
char get_first(void);
char get_choice(void);
void count(void);


int main(void)
{
    SetConsoleOutputCP(1251);
    char ch;

    printf("Это программа примера работы с меню.\n");
    printf("Сделайте выбор:\n");
    printf("a. Вариант №1    b. Вариант №2(со счетчиком)\n");
    printf("c. Вариант №3    q. Выход\n");
    while((ch=get_choice())!='q')
    {
        switch (ch)
        {
        case 'a':
            printf("Это вариант №1.\n");
            break;
        case 'b':
            printf("Это вариант №2 (со счетчиком).\n");
            count();
            break;
        case 'c':
            printf("Это вариант №3.\n");
            break;
        default:
            printf("Это ошибка!\n");
        }

    printf("Это программа примера работы с меню.\n");
    printf("Сделайте выбор:\n");
    printf("a. Вариант №1    b. Вариант №2(со счетчиком)\n");
    printf("c. Вариант №3    q. Выход\n");


    }
    printf("Вот и всё!\n");

    return 0;
}

int get_int(void)
{
    char ch;
    int i;
    printf("Введите простое целое число, до которого будет вестись счет: ");
    while(scanf("%d", &i)!=1)
    {
        while((ch=getchar())!='\n');
            putchar(ch);
        printf("Ошибка! Введите простое целое число, до которого будет вестись счет: ");

    }
    return i;

}

void count(void)
{
    int c, limit;
    limit=get_int();
    for(c=1;c<=limit;c++)
        printf("%d\n", c);
}

char get_choice(void)
{
    char choice;
    choice=get_first();
    while(choice<'a' || (choice>'c' && choice!='q'))
    {
        while(getchar()!='\n')
            continue;
        printf("Ошибка! Введите правильный пункт:");
        choice=get_first();
    }
    return choice;
}



char get_first(void)
{
    char ch;

    ch=getchar();
    /*if (isspace(choice)==1)
        choice=getchar();*/

    while(getchar()!='\n')
        continue;
    return ch;
}




