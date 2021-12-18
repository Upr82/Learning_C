#include <stdio.h>
#include <stdlib.h>

#define NAME 30

int main()
{
    char name[NAME];
    FILE *fp;
    int ch=0,er=0;
    long pos;

    system("chcp 1251");

    fprintf(stdout,"������� ��� �����: ");
    while(fscanf(stdin,"%30s",name)!=1)
    {
        fprintf(stderr,"������! ������� ��� �����: ");
    }


    while((fp=fopen(name,"r"))==NULL)
    {
        fprintf(stderr,"������! �� ���� ������� ���� %s.\n",name);
        fprintf(stdout,"������� ��� �����: ");
        while(fscanf(stdin,"%30s",name)!=1)
        {
            fprintf(stderr,"������! ������� ��� �����: ");
        }
    }

    fprintf(stdout,"������� ���������� ����� �������, �� �������� �������\n");
    fprintf(stdout,"���������� ������ �� ������� ����� ������ (��� �� ����� �����).\n");
    fprintf(stdout,"��� ������ ������� ������������� ��� ���������� ��������: ");
    while(fscanf(stdin,"%ld",&pos)==1 && pos>0)
    {
        if((er=fseek(fp,pos,SEEK_SET))!=0)
        {
            fprintf(stderr,"������! ����� �� ������� �����.\n");
        } else
        {
            while((ch=getc(fp))!= EOF && ch!='\n')
                putc(ch,stdout);
        }
        rewind(fp);
        fprintf(stdout,"\n������� ���������� ����� �������, �� �������� �������\n");
        fprintf(stdout,"���������� ������ �� ������� ����� ������ (��� �� ����� �����).\n");
        fprintf(stdout,"��� ������ ������� ������������� ��� ���������� ��������: ");
    }

    if(fclose(fp))
    {
        fprintf(stderr,"������ �������� ����� %s.\n", name);
        exit(EXIT_FAILURE);
    }

    printf("\nEnd!\n");
    return 0;
}
