#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 256

int main(int argc, char *argv[])
{
    int ch;
    ch=*argv[1];//????????
    char str[SIZE];
    char *find_ch;
    FILE *fp;

    system("chcp 1251");

    fprintf(stdout,"�� ����� ������ %c\n",ch);

    if((fp=fopen(argv[2],"r"))==NULL)
    {
        puts("������ �������� �����.");
        exit(EXIT_FAILURE);
    }

    while(fgets(str,SIZE,fp)!=NULL)
    {
        if((find_ch=strchr(str,ch))!=NULL)
            {
                fputs(str,stdout);
                fprintf(stdout,"��� ��� ���� ������: %s\n", find_ch);
            }
    }

    if(fclose(fp))
    {
        puts("������ �������� �����.");
        exit(EXIT_FAILURE);
    }
    printf("\nEnd!\n");
    return 0;
}
