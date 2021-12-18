#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

char ch[20];
int i,len;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("¬ведите слово: ");
    scanf("%s", ch);
    len = strlen(ch);
    for (i=(len-1);i>=0;i--) printf("%c", ch[i]);


    return 0;
}
