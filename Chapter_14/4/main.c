#include <stdio.h>
#include <stdlib.h>

#define SIZE 35
#define MAXBOOK 3

char *s_gets(char *str, int n);

struct book{
    char name[SIZE];
    char auth[SIZE];
    float price;
};

int main()
{

    struct book biblio[MAXBOOK];
    int i=0, count=0;

    system("chcp 1251");

    printf("������� �������� ����� � %d, ��� ���������� ������� ������ ������.\n", i+1);

    while(i<MAXBOOK && s_gets(biblio[i].name,SIZE)!=NULL && biblio[i].name[0]!='\0')
    {
        printf("������� ������ �����: ");
        s_gets(biblio[i].auth, SIZE);
        printf("������� ���� �����  : ");
        fscanf(stdin,"%f", &biblio[i].price);
        while(getchar()!='\n')
            continue;

        count++;
        printf("������� �������� ����� � %d, ��� ���������� ������� ������ ������.\n", ++i+1);
    }


    puts("��� ��� �� �����:");
    for(i=0;i<count;i++)
    {
        printf("����� � %d:\n", i+1);
        printf("%-20s: %s\n","��������", biblio[i].name);
        printf("%-20s: %s\n","�����", biblio[i].auth);
        printf("%-20s: %.2f\n", "����", biblio[i].price);
    }




    printf("Hello world!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result;
    int i=0;

    result=fgets(str, n, stdin);
    if(result)
    {
        while(str[i]!='\0' && str[i]!='\n')
            i++;
        if(str[i]=='\n')
            str[i]='\0';
        else while(getchar()!='\n')
                continue;
    }
    return result;
}
