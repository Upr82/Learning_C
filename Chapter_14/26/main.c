#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40
#define MAXBOOKS 10
#define FILENAME "2.txt"

struct book
{
    char auth[SIZE];
    char name[SIZE];
    float price;
};
char *s_gets(char *str, int n);

int main()
{
    struct book biblio[MAXBOOKS];
    FILE *fb;
    int count=0, i;

    system("chcp 1251");

    if((fb=fopen(FILENAME,"a+b"))==NULL)
    {
        fprintf(stderr, "������ �������� ����� %s.", FILENAME);
        exit(1);
    }
    rewind(fb);
    while(count<MAXBOOKS && fread(&biblio[count], sizeof(struct book),1,fb)==1)
    {
        count++;
    }
    //rewind(fb);
    if(count)
    {
        fprintf(stdout, "��� ����� ����� ���� � ����� ����������:\n");
        for(i=0;i<count;i++)
        {
            fprintf(stdout, "%s ��������� %s �� %g ������.\n",
                    biblio[i].name, biblio[i].auth, biblio[i].price);
        }
    }

    if(count>=MAXBOOKS-1)
    {
        fprintf(stderr, "���� ��������, ���������� ����������.\n");
        exit(2);
    }

    fprintf(stdout, "������� �������� ����� �����, ��� ���������� - ������ ������.\n");
    while(count<MAXBOOKS && s_gets(biblio[count].name, SIZE)!=NULL && biblio[count].name[0]!='\0')
    {
        fprintf(stdout, "������� ��� ������:\n");
        s_gets(biblio[count].auth, SIZE);
        fprintf(stdout, "������� ���� �����: \n");
        fscanf(stdin, "%f", &biblio[count].price);
        while(getchar()!='\n')
            continue;
        fwrite(&biblio[count], sizeof(struct book), 1, fb);
        if(++count<MAXBOOKS)
            fprintf(stdout, "������� �������� ����� �����, ��� ���������� - ������ ������.\n");
    }

    if(count==0)
        fprintf(stdout, "�� ����� �����? ����� �����!\n");
    else
    {
        rewind(fb);
        fprintf(stdout, "��� ���������� ������ ����� ����������: \n");
        for(i=0;i<count;i++)
        {
            fprintf(stdout, "%s ��������� %s �� %g ������.\n",
                    biblio[i].name, biblio[i].auth, biblio[i].price);
        }
    }

    if(fclose(fb))
    {
        fprintf(stderr, "������ �������� ����� %s.", FILENAME);
    }

    printf("\nEnd!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result, *fin;
    result=fgets(str, n, stdin);
    if(result)
    {
        fin=strchr(str, '\n');
        if(fin)
            *fin='\0';
        else
            while(getchar()!='\n')
                continue;
    }
    return result;
}
