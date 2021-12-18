#include <stdio.h>
#include <windows.h>
#include <string.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    void fit(char *, int);
    char words[81]="¬от, эта строка в массиве,"
    "который €вл€етс€ строкой.";

    puts(words);
    fit(words, 15);
    puts(words);
    puts(words+16);

    printf("Hello world!\n");
    return 0;
}
void fit(char *str, int n)
{
    *(str+n)='\0';
}
