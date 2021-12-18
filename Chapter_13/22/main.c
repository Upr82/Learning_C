#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main()
{
    char *name ="array.txt";
    int i;
    double d;
    double ar_d[ARSIZE];
    long position;
    FILE *fp;

    system("chcp 1251");

    if((fp=fopen(name,"wb"))==NULL)
    {
        puts("������ �������� �����.");
        exit(EXIT_FAILURE);
    }

    for(i=0;i<ARSIZE;i++)
        ar_d[i]=i+(double)i/1000;

    if(fwrite(ar_d,sizeof(double),ARSIZE,fp)!=ARSIZE)
    {
        puts("������ ������ � ����.");
    }
    if(fclose(fp))
    {
        puts("������ �������� �����.");
        exit(EXIT_FAILURE);
    }

    puts("������ ���� � � ���� ������� ����� � 1000 ���������� double.");

    if((fp=fopen(name,"rb"))==NULL)
    {
        puts("�� ���� �������� ������� ����.");
        exit(EXIT_FAILURE);
    }

    fprintf(stdout,"������� ����� ������� �������� (�� 0 �� %d): ",ARSIZE-1);
    while(scanf("%d", &i)==1 && i>=0 && i<ARSIZE)
    {
        position=(long)(i*sizeof(double));
        fseek(fp, position,SEEK_SET);
        fread(&d,sizeof(double),1,fp);
        fprintf(stdout,"� ������ � %d ��������� ����� %.3f.\n", i,d);

        fprintf(stdout,"������� ����� ������� �������� (�� 0 �� %d): ",ARSIZE-1);
    }

    if(fclose(fp))
    {
        puts("������ ���������� �������� �����");
        exit(EXIT_FAILURE);
    }

    printf("\nEnd!\n");
    return 0;
}
