#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MSG "��� ���������."

int main()
{
    SetConsoleOutputCP(1251);
    char words[]= MSG;
    const char *ptr = MSG;

    printf("��� ���������., %p\n", "��� ���������.");
    printf("              , %p\n", words);
    printf("              , %p\n", ptr);
    printf("              , %p\n", MSG);
    printf("��� ���������., %p\n", "��� ���������.");



    return 0;
}
