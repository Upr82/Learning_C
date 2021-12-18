#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NAME 32
#define SIZE 40

int main()
{
    char name[NAME];
    char words[SIZE];
    FILE *fp;
    int i=1,n;

    system("chcp 1251");

    fprintf(stdout,"������� ��� ����� ��� ���������� ����: ");
    while(fscanf(stdin,"%40s", name)!=1 || name[0]=='\0')
    {
        fprintf(stderr, "������! ������� ��� ����� ��� ���������� ����: ");
    }

    while((fp=fopen(name,"a+"))==NULL)
    {
        fprintf(stderr, "������! �� ���� ������� ���� %s, ��������� ��� �����.\n", name);
    }

    rewind(fp);

    while(fscanf(fp,"%s",words)==1)
    {
        i++;
        fprintf(stdout,"%s\n",words);
    }

    fprintf(stdout,"������ ������� ���� �����, ��� ���������� ������ # � ������ ������.\n");
    while((fscanf(stdin,"%40s",words)==1) && (words[0]!='#'))
        fprintf(fp,"%d%s\n",i++, words);

    fprintf(stdout, "��� ��� ����������:\n");
    rewind(fp);

    while(fscanf(fp,"%s",words)==1)
    {
        fprintf(stdout,"%s\n",words);
    }

    if(fclose(fp))
    {
        fprintf(stderr,"������! �� ���� ������� ���� %s.\n", name);
        exit(EXIT_FAILURE);
    }

    printf("\nEnd!\n");
    return 0;
}
