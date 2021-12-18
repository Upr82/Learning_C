#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MSG "Вот сообщение."

int main()
{
    SetConsoleOutputCP(1251);
    char words[]= MSG;
    const char *ptr = MSG;

    printf("Вот сообщение., %p\n", "Вот сообщении.");
    printf("              , %p\n", words);
    printf("              , %p\n", ptr);
    printf("              , %p\n", MSG);
    printf("Вот сообщение., %p\n", "Вот сообщении.");



    return 0;
}
