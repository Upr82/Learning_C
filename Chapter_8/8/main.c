#include <stdio.h>
#include <windows.h>
#include <ctype.h>

char get_choise(void);
char get_first(void);
char choise;
void count(void);
int main(void)
{
    SetConsoleOutputCP(1251);
    printf("Программа с меню.\n");
    while(
          (choise=get_choise())
          !='q')
    {
        switch (choise)
        {
        case 'a':
            printf("Вы выбрали вариант №1.\n");
            break;
        case 'b':
            printf("Вы выбрали вариант №2.\n");
            count();
            break;
        case 'c':
            printf("Вы выбрали вариант №3.\n");
            break;
        default:
            printf("Ошибка!\n");
            putchar(choise);
            printf("\n");
        }
    }

    return 0;
}

char get_choise(void)
{
    char ch;
    printf("a. Вариант №1.    b. Вариант №2.\n");
    printf("c. Вариант №3.    q. Выход.\n");
    ch=get_first();
    while((ch<'a' || ch>'z') && ch!='q')
    {
        printf("Неправильный ввод!\n");
        printf("a. Вариант №1.    b. Вариант №2.\n");
        printf("c. Вариант №3.    q. Выход.\n");
        ch=get_first();
    }
    return ch;
}

char get_first(void)
{
    char ch;
    ch = getchar();
    if (!isspace(ch))
        ;
    else ch = getchar();

    while(getchar()!='\n')
        continue;

    return ch;
}

void count(void)
{
    int i,n;
    printf("Введите число, до которого нужно вести счет: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        printf("%d ", i);
    printf("\n");
    //getchar();
}
