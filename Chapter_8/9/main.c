#include <windows.h>
#include <ctype.h>
#include <stdio.h>


int get_int(void);
char get_first(void);
char get_choice(void);
void count(void);


int main(void)
{
    SetConsoleOutputCP(1251);
    char ch;

    printf("��� ��������� ������� ������ � ����.\n");
    printf("�������� �����:\n");
    printf("a. ������� �1    b. ������� �2(�� ���������)\n");
    printf("c. ������� �3    q. �����\n");
    while((ch=get_choice())!='q')
    {
        switch (ch)
        {
        case 'a':
            printf("��� ������� �1.\n");
            break;
        case 'b':
            printf("��� ������� �2 (�� ���������).\n");
            count();
            break;
        case 'c':
            printf("��� ������� �3.\n");
            break;
        default:
            printf("��� ������!\n");
        }

    printf("��� ��������� ������� ������ � ����.\n");
    printf("�������� �����:\n");
    printf("a. ������� �1    b. ������� �2(�� ���������)\n");
    printf("c. ������� �3    q. �����\n");


    }
    printf("��� � ��!\n");

    return 0;
}

int get_int(void)
{
    char ch;
    int i;
    printf("������� ������� ����� �����, �� �������� ����� ������� ����: ");
    while(scanf("%d", &i)!=1)
    {
        while((ch=getchar())!='\n');
            putchar(ch);
        printf("������! ������� ������� ����� �����, �� �������� ����� ������� ����: ");

    }
    return i;

}

void count(void)
{
    int c, limit;
    limit=get_int();
    for(c=1;c<=limit;c++)
        printf("%d\n", c);
}

char get_choice(void)
{
    char choice;
    choice=get_first();
    while(choice<'a' || (choice>'c' && choice!='q'))
    {
        while(getchar()!='\n')
            continue;
        printf("������! ������� ���������� �����:");
        choice=get_first();
    }
    return choice;
}



char get_first(void)
{
    char ch;

    ch=getchar();
    /*if (isspace(choice)==1)
        choice=getchar();*/

    while(getchar()!='\n')
        continue;
    return ch;
}




