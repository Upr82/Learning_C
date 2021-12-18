#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    void fit(char *, int);
    char words[20];

    fgets(words, 20, stdin);
    puts(words);
    fit(words, 10);
    puts(words+11);


    return 0;
}
void fit(char *str, int n)
{
    if(strlen(str)>n)
        *(str+n)='\0';
}
