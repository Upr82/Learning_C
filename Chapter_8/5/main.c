#include <stdio.h>
#include <windows.h>
char ch;
int guess =1;
int main(void)
{
    SetConsoleOutputCP(1251);
    printf("������ ����� ����� �� 1 �� 100.\n");
    printf("���� � ����, ����� 'y', ���� ���, �� 'n'.\n");
    printf("�� ������� ����� %d?\n", guess);
    while(((ch=getchar())!='y')&&(guess<=100))
    {
        if (ch=='n') printf("�� ������. �������� ���. �� ������� %d?\n", ++guess);
        else printf("����������� ������ ���������� ������.\n", ++guess);


        while (getchar()!= '\n')
            continue;
    }
    printf("��� � ��! �� ������� %d!\n", guess);



    return 0;
}
