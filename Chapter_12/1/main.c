#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251");
    int x=1;

    printf("������� ���������� � = %d �� ������ %p\n", x, &x);
    {
        int x=77;
        printf("���������� ���������� � = %d �� ������ %p\n", x, &x);
    }
    printf("����� ������� ��������� � = %d �� ������ %p\n", x, &x);
    while(x++<10)
    {
        int x=100;
        printf("���������� � ������ ����� = %d �� ������ %p\n", x, &x);
        x++;
    }
    printf("����� ������� ��������� � = %d �� ������ %p\n", x, &x);

    return 0;
}
