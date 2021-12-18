#include <stdio.h>
#include <windows.h>
#define ONE 1
#define TWO 4

int status, code;

int choice (int, int);
void menu(void);

int main(void)
{
    SetConsoleOutputCP(1251);

    menu();
    while((code=choice(ONE, TWO))!=4)
    {
        switch(code)
        {
        case 1:
            printf("�� � ���� ����������� ������.\n");
            break;
        case 2:
            printf("�� � ���� ����������� ������.\n");
            break;
        case 3:
            printf("�� � ���� �������� ������.\n");
            break;
        default:
            printf("������ ����.\n");
            break;
        }
        menu();
    }



    return 0;
}
void menu(void)
{
    printf("�������� ���� �� ��������� ���������: \n");
    printf("1) ���������� �����    2) ����������� �����\n");
    printf("3) ������� �����       4) ����� �� ���������.\n");
    printf("������� ����� ���������� ��������: ");
}

int choice(int a, int b)
{
    int answer, status;
    while((status=(scanf("%d", &answer)))!=1 || (answer<a || answer>b))
    {
        if (status!=1) scanf("%*s");
        printf("������! ������� ����� ����� �� %d �� %d: ", a, b);
    }
    return answer;
}
