#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main()
{
    system("chcp 1251");
    FILE *fp;
    char name[MAX];

    if((fp=fopen("text.txt","a+"))==NULL)
    {
        fprintf(stderr,"�� ���� ������� text.txt.\n");
        exit(EXIT_FAILURE);
    }
    puts("������� �����, ��� ��������� ����� # � ������ ������.");
    while((fscanf(stdin,"%40s", name)==1) && (name[0]!='#'))
        {
            fprintf(fp,"%s\n",name);
        }
        puts("���������� �����:");
        rewind(fp);
        while(fscanf(fp,"%s", name)==1)
        puts(name);

    if(fclose(fp)!=0)
    {
        fprintf(stderr,"�� ���� ������� text.txt.\n");
        exit(EXIT_FAILURE);
    }

    printf("End!\n");
    getchar();
    getchar();
    return 0;
}
