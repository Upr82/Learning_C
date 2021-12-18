#include <stdio.h>
#include <windows.h>
#define ONE 1
#define TWO 4

int status, code;

int choice (int, int);
void menu(void);

int main(void)
{
    SetConsoleOutputCP(1251);

    menu();
    while((code=choice(ONE, TWO))!=4)
    {
        switch(code)
        {
        case 1:
            printf("Вы в меню копирования файлов.\n");
            break;
        case 2:
            printf("Вы в меню перемещения файлов.\n");
            break;
        case 3:
            printf("Вы в меню удаления файлов.\n");
            break;
        default:
            printf("Ошибка меню.\n");
            break;
        }
        menu();
    }



    return 0;
}
void menu(void)
{
    printf("Выберите один из следующих вариантов: \n");
    printf("1) копировать файлы    2) переместить файлы\n");
    printf("3) удалить файлы       4) выйти из программы.\n");
    printf("Введите номер выбранного варианта: ");
}

int choice(int a, int b)
{
    int answer, status;
    while((status=(scanf("%d", &answer)))!=1 || (answer<a || answer>b))
    {
        if (status!=1) scanf("%*s");
        printf("Ошибка! Введите целое число от %d до %d: ", a, b);
    }
    return answer;
}
