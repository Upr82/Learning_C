#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int delimoe, delitel;

int main()
{
    SetConsoleOutputCP(1251);
    printf("��������� ������� ������� �� �������������� �������.\n");
    printf("������ ������� ��������: ");
    scanf("%d", &delitel);
    printf("������ ������� �������: ");
    scanf("%d", &delimoe);
    printf("%d %% %d = %d\n\n", delimoe, delitel, delimoe%delitel);

    printf("������� ��������� ����� ��� �������� (<=0 ��� ������ ��\n");
    printf("���������): ");
    scanf("%d", &delimoe);
    while (delimoe>0)
    {
        printf("%d %% %d = %d\n\n", delimoe, delitel, delimoe%delitel);
        printf("������� ��������� ����� ��� �������� (<=0 ��� ������ ��\n");
        printf("���������): ");
        scanf("%d", &delimoe);
    }
    printf("������!\n");


    return 0;
}
