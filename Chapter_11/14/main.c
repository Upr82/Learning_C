#include <stdio.h>
#include <windows.h>
#define MSG "��� ������ - ������� �� define."
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char arr1[81]="��� ������ � ������� 1.";
    char notarr[]={'�','�','�','!'};
    char arr2[]="��� ������ � ������� 2.";
    char *ptr="��������� ptr ��������� �� ��� ������.";
    void put1(char *str);
    int put2(char *str);

    put1(MSG);
    put1(arr1);
    put1(notarr);
    put1(arr2);
    put1(ptr);

    putchar('\n');

    printf(" ����� �������� = %d\n", put2(MSG));
    printf(" ����� �������� = %d\n", put2(arr1));
    printf(" ����� �������� = %d\n", put2(notarr));
    printf(" ����� �������� = %d\n", put2(arr2));
    printf(" ����� �������� = %d\n", put2(ptr));


    return 0;
}
void put1(char *str)
{
    while(*str)
        putchar(*str++);
    putchar('\n');
}
int put2(char *str)
{
    int count=0;
    while(*str)
    {
        putchar(*str++);
        count++;
    }

    return count;
}
