#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


int main()
{
    system("chcp 1251");
    system("cls");
    char *s_gets(char *, int);
    char source1[SIZE];
    char source2[SIZE];
    char target[SIZE*2+40];
    double priz;
    fputs("������� ���� ���: ", stdout);
    s_gets(source1, SIZE);
    fputs("������� ���� �������: ", stdout);
    s_gets(source2, SIZE);
    fputs("������� ����� ������ �����: ", stdout);
    scanf("%lf", &priz);
    sprintf(target,"%s %s, �������� ��� ���� � ������� %g ������!\n", source1, source2, priz);
    puts("��� ��� �����:");
    puts(target);


    printf("Hello world!\n");
    return 0;
}
