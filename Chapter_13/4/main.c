#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40

char name1[SIZE];
char name2[SIZE];
int lenght1;

FILE *in, *out;
int ch, count=0, choise;

int main()
{

    system("chcp 1251");

    int menu(void);
    int create_add(void);
    int edit_add(void);
    int copy_file(void);
    int read_file(void);
    void dir(void);
    void cls(void);

    choise=menu();
    while(choise>0)
    {
        switch (choise)
        {
            case 1:
                if(create_add()!=0)
                    break;
                break;
            case 2:
                if(edit_add()!=0)
                    break;
                break;
            case 3:
                if(copy_file()!=0)
                    break;
                break;
            case 4:
                if(read_file()!=0)
                    break;
                break;
            case 5:
                dir();
                break;
            case 6:
                cls();
                break;
        }
        choise=menu();
    }
    puts("�����.");
    return 0;
}

int menu(void)
{
    int choise;
    printf("������ � ���������� �������.\n");
    puts("1 - ������� ���� � �������� ������.");
    puts("2 - �������� ����� � ����.");
    puts("3 - ������� ����� �����.");
    puts("4 - �������� �����.");
    puts("5 - ���������� �������.");
    puts("6 - �������� �����.");
    puts("0 - �����.");
    scanf("%d", &choise);
    getchar();

    return choise;
}
int create_add(void)
{

    puts("�� � ������� \"������� ���� � �������� ������.\"");
    printf("������� ��� ����� � �����������: ");
    if(scanf("%s", name1)!=1)
    {
        printf("������ ����� �����!\n");
        getchar();
        return -1;
    }
    getchar();
    lenght1=strlen(name1);
    name1[lenght1]='\0';
    if((in=fopen(name1,"w"))==NULL)
    {
        printf("������ �������� ����� %s.\n", name1);
        return -2;
    }
    puts("������� ����� (��� ���������� ����� ^Z).");
    while((ch=getc(stdin))!=EOF)
    {
        putc(ch,in);
        putchar(ch);
    }
    if(fclose(in)!=0)
    {
        printf("������ �������� ����� %s.\n", name1);
        return -3;
    }
    return 0;
}
int edit_add(void)
{
    puts("�� � ������� \"�������� ����� � ����.\"");
    puts("������� ��� ����� � �����������.");
    if(scanf("%s", name1)!=1)
    {
        printf("������ ����� �����!\n");
        getchar();
        return -1;
    }
    getchar();
    lenght1=strlen(name1);
    name1[lenght1]='\0';
    if((in=fopen(name1,"a+"))==NULL)
    {
        printf("������ �������� ����� %s.\n", name1);
        return -2;
    }
    puts("��� ����� �� �����. ������� ���� ����� (��� ���������� ����� ^Z).");
    while((ch=getc(in))!=EOF)
        putc(ch,stdout);
    while((ch=getc(stdin))!=EOF)
    {
        putc(ch,in);
    }
    if(fclose(in)!=0)
    {
        printf("������ �������� ����� %s.\n", name1);
        return -3;
    }
    return 0;
}
int copy_file(void)
{
    puts("�� � ������� \"������� ����� �����.\"");
    puts("������� ��� ��������� ����� � �����������.");
    if(scanf("%s", name1)!=1)
    {
        fprintf(stderr,"������ ����� ��������� �����.\n");
        getchar();
        return -1;
    }
    getchar();
    lenght1=strlen(name1);
    name1[lenght1]='\0';
    strncpy(name2,name1,lenght1-3);
    strcat(name2,"bak");
    name2[lenght1]='\0';
    if((in=fopen(name1,"r"))==NULL)
    {
        fprintf(stderr,"������ �������� ��������� �����.\n");
        return -2;
    }

    if((out=fopen(name2,"w"))==NULL)
    {
        fprintf(stderr,"������ �������� ��������� �����.\n");
        return -4;
    }
    while((ch=getc(in))!=EOF)
    {
        putc(ch,out);
    }
    if(fclose(in)!=0 || fclose(out)!=0)
    {
        fprintf(stderr,"������ �������� ������ ��� ���������� ������.\n");
        return -3;
    }
    printf("����������� ������ �� %s � %s ���������.\n", name1, name2);
    return 0;
}
int read_file(void)
{
    puts("�� � ������� \"�������� �����.\"");
    puts("������� ��� ����� � �����������.");
    if(scanf("%s", name1)!=1)
    {
        fprintf(stderr,"������ ����� �����!\n");
        getchar();
        return -1;
    }
    getchar();
    lenght1=strlen(name1);
    name1[lenght1]='\0';
    if((in=fopen(name1,"r"))==NULL)
    {
        fprintf(stderr,"������ �������� ����� %s.\n", name1);
        return -2;
    }
    puts("��� ����� �� �����.");
    while((ch=getc(in))!=EOF)
        putc(ch,stdout);
    if(fclose(in)!=0)
    {
        fprintf(stderr,"������ �������� ����� %s.\n", name1);
        return -3;
    }
    return 0;
}
void dir(void)
{
    system("dir");
}
void cls(void)
{
    system("cls");
}
