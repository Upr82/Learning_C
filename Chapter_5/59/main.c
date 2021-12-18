#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

char ch[255];
int i;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("¬ведите строку (не более 255 символов):\n");
    for (i=0;ch[i-1]!='\n';i++) scanf("%c", &ch[i]);
    for(;i>=0;i--) printf("%c", ch[i]);

    return 0;
}
