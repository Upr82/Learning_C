#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    system("chcp 1251");
    int i, count=0;
    FILE *fp;
    if(argc!=2)
    {
        printf("������ ���������! ����� ���: %s ���_�����\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp=fopen("14","a+"))==NULL)
    {
        printf("������ �������� ����� %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while((i=getc(fp))!=EOF)
    {
        putchar(i);
        count++;
    }
    printf("� ����� %s ���������� %d ��������.\n", argv[1], count);
    fclose(fp);
    return 0;
}
