#include <stdio.h>
#include <windows.h>
#define STLEN 15

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char word[STLEN];
    puts("Введите строку менее 15 символов: ");
    fgets(word, STLEN, stdin);
    puts("Вывод строки через puts() и через fputs()");
    puts(word);
    fputs(word, stdout);

    puts("Введите ещё одну строку, более 15 символов: ");
    fgets(word, STLEN, stdin);
    puts("Вывод строки через puts() и через fputs()n");
    puts(word);
    fputs(word, stdout);


    return 0;
}
