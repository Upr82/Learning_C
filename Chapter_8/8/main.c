#include <stdio.h>
#include <windows.h>
#include <ctype.h>

char get_choise(void);
char get_first(void);
char choise;
void count(void);
int main(void)
{
    SetConsoleOutputCP(1251);
    printf("��������� � ����.\n");
    while(
          (choise=get_choise())
          !='q')
    {
        switch (choise)
        {
        case 'a':
            printf("�� ������� ������� �1.\n");
            break;
        case 'b':
            printf("�� ������� ������� �2.\n");
            count();
            break;
        case 'c':
            printf("�� ������� ������� �3.\n");
            break;
        default:
            printf("������!\n");
            putchar(choise);
            printf("\n");
        }
    }

    return 0;
}

char get_choise(void)
{
    char ch;
    printf("a. ������� �1.    b. ������� �2.\n");
    printf("c. ������� �3.    q. �����.\n");
    ch=get_first();
    while((ch<'a' || ch>'z') && ch!='q')
    {
        printf("������������ ����!\n");
        printf("a. ������� �1.    b. ������� �2.\n");
        printf("c. ������� �3.    q. �����.\n");
        ch=get_first();
    }
    return ch;
}

char get_first(void)
{
    char ch;
    ch = getchar();
    if (!isspace(ch))
        ;
    else ch = getchar();

    while(getchar()!='\n')
        continue;

    return ch;
}

void count(void)
{
    int i,n;
    printf("������� �����, �� �������� ����� ����� ����: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        printf("%d ", i);
    printf("\n");
    //getchar();
}
