#include <stdio.h>
#include <windows.h>
#include <string.h>

int letter;
char name[8];

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("������������, ��� ��� �����?\n");
    scanf("%s", name);
    printf("%s, � ����� ����� %d ����,\n", name, strlen(name));
    printf("� ���� �� � ��� ��� ���� %d ����.", sizeof(name));
    getchar();
    getchar();





    return 0;
}
