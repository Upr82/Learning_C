#include <stdio.h>
#include <windows.h>
#define MSG "Это символьная строковая константа."
#define SIZE 80

int main(void)
{
    SetConsoleOutputCP(1251);
    char words[SIZE]={"Это строка в массиве."};
    char *ptr="Что-то указывает на эту строку.";
    puts("Вот эти строки:");
    puts(MSG);
    puts(words);
    puts(ptr);
    words[3]='+';
    puts(words);

    return 0;
}
