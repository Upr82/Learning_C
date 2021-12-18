#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR 20
#define COL 30
#define NAME 20

char trans(int n);

int main()
{
    FILE *in, *out;
    int int_arr[STR][COL];
    char source_name[NAME];
    char target_name[NAME];
    int str,col,num;

    system("chcp 1251");

    fprintf(stderr,"������� ��� ��������� �����: ");
    while(fscanf(stdin,"%20s", source_name)!=1)
    {
        fprintf(stderr,"������� ��� ��������� �����: ");
    }

    while((in=fopen(source_name,"r"))==NULL)
    {
        fprintf(stderr,"������ �������� ����� %s.\n", source_name);
        fprintf(stderr,"������� ��� ��������� �����: ");
        while(fscanf(stdin,"%20s", source_name)!=1)
        {
            fprintf(stderr,"������! ������� ��� ��������� �����: ");
        }
    }

    fprintf(stderr,"������� ��� �������� ����� (������ ���������� �� ���������): ");
    while((fscanf(stdin,"%20s", target_name)!=1) || (strcmp(source_name,target_name)==0))
    {
        fprintf(stderr,"������! ������� ��� �������� �����(������ ���������� �� ���������): ");
    }

    while((out=fopen(target_name,"w"))==NULL)
    {
        fprintf(stderr,"������ �������� ����� %s.\n", target_name);
        fprintf(stderr,"������� ��� �������� ����� (������ ���������� �� ���������): ");
        while((fscanf(stdin,"%20s", target_name)!=1) || (strcmp(source_name,target_name)==0))
        {
            fprintf(stderr,"������! ������� ��� �������� ����� (������ ���������� �� ���������): ");
        }
    }

    for(str=0;str<STR;str++)
    {
        for(col=0;col<COL;col++)
        {
            fscanf(in,"%d",&num);
            int_arr[str][col]=num;
        }
    }

    for(str=0;str<STR;str++)
    {
        for(col=0;col<COL;col++)
            {
                fprintf(out,"%c", trans(int_arr[str][col]));
                fprintf(stdout,"%c", trans(int_arr[str][col]));
            }

        putc('\n',out);
        putc('\n',stdout);
    }

    if(fclose(in))
    {
        fprintf(stderr,"������ �������� ��������� ����� %s.\n", source_name);
        exit(EXIT_FAILURE);
    }

    if(fclose(out))
    {
        fprintf(stderr,"������ �������� �������� ����� %s.\n", target_name);
        exit(EXIT_FAILURE);
    }

    printf("Hello world!\n");
    return 0;
}
char trans(int n)
{
    char symb;
    switch (n)
    {
        case 0:
            symb=' ';
            break;
        case 1:
            symb='.';
            break;
        case 2:
            symb='\'';
            break;
        case 3:
            symb=':';
            break;
        case 4:
            symb='`';
            break;
        case 5:
            symb='*';
            break;
        case 6:
            symb='=';
            break;
        case 7:
            symb='$';
            break;
        case 8:
            symb='%';
            break;
        case 9:
            symb='#';
            break;
    }
    return symb;
}
