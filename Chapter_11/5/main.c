#include <stdio.h>
#include <windows.h>
#define SIZE 5
#define LENGHT 40

int main(void)
{
    SetConsoleOutputCP(1251);
    const char *mytalents [SIZE]={
    "Быстро и точно считаю",
    "Выполняю инструкции",
    "Храню большие объёмы данных",
    "Знаю про указатели",
    "Исполнение инструкций с точностью до буквы"};
    char yourtalents[SIZE][LENGHT]={
    "Хорошо сплю",
    "Хожу по прямой",
    "Читаю произведения",
    "Хороший аппетит",
    "Общение с друзьями"};

    printf("%-52s %-25s\n\n", "Мои таланты", "Твои таланты");
    int i;
    for(i=0;i<SIZE;i++)
        printf("%-52s %-25s\n", *(mytalents+i), yourtalents[i]);
    printf("размер = %d байт,                                    размер = %d байт.\n",
           sizeof(mytalents), sizeof(yourtalents));



    return 0;
}
