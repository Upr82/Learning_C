#include <stdio.h>
#include <ctype.h>
#include <windows.h>

char ch;

int main (void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("������� ��� �������� ����� � � ������ �������� (��� ������ #): ");
    while ((ch=getchar())!='#')
    {
        if (ch=='\n') continue;
        if (islower(ch))
            switch (ch)
        {
            case 'f':
                {
                    printf("��������.\n");
                    printf("��������.\n");
                }
                break;
            case ',':
                {
                    printf("�����.\n");
                    printf("�����.\n");
                }
                break;
            case 'd':
                {
                    printf("�����.\n");
                    printf("�����.\n");
                }

                break;
            case 'u':
                {
                    printf("���� �������.\n");
                    printf("���� �������.\n");
                }

                break;
            default:
                {
                    printf("� �� ���� �������� �� ��� �����. ����� ������.\n");
                    printf("� �� ���� �������� �� ��� �����. ����� ������.\n");
                }

        }
        else printf("����� �������� �����.\n");
        while (getchar()!='\n')
            continue;
        printf("������� ��� �������� ����� � � ������ �������� (��� ������ #): ");
    }

    return 0;
}
