#include <stdio.h>
#include <windows.h>
#define STLEN 15

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char word[STLEN];
    puts("������� ������ ����� 15 ��������: ");
    fgets(word, STLEN, stdin);
    puts("����� ������ ����� puts() � ����� fputs()");
    puts(word);
    fputs(word, stdout);

    puts("������� ��� ���� ������, ����� 15 ��������: ");
    fgets(word, STLEN, stdin);
    puts("����� ������ ����� puts() � ����� fputs()n");
    puts(word);
    fputs(word, stdout);


    return 0;
}
