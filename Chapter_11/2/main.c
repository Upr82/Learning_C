#include <stdio.h>
#include <windows.h>
#define MSG "��� ���������� ��������� ���������."
#define SIZE 80

int main(void)
{
    SetConsoleOutputCP(1251);
    char words[SIZE]={"��� ������ � �������."};
    char *ptr="���-�� ��������� �� ��� ������.";
    puts("��� ��� ������:");
    puts(MSG);
    puts(words);
    puts(ptr);
    words[3]='+';
    puts(words);

    return 0;
}
