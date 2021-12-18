#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40
#define MAXBOOK 100

struct book {
char name[SIZE];
char auth[SIZE];
float price;
};

char *s_gets(char *str, int n);

int main()
{
    system("chcp 1251");

    struct book biblio[MAXBOOK];
    int i=0, count;

    printf("������� �������� ����� ��� ������ ������ ��� ����������: \n");
    while(i<MAXBOOK && s_gets(biblio[i].name, SIZE)!=NULL && biblio[i].name[0]!='\0')
    {
        printf("������� ������: \n");
        s_gets(biblio[i].auth, SIZE);
        printf("������� ����: \n");
        scanf("%f", &biblio[i].price);
        while(getchar()!='\n')
            continue;
        i++;
        printf("������� �������� ����� ��� ������ ������ ��� ����������: \n");
    }

    if(i>0)
    {
        printf("\n��� ������ �������� ���� ����: \n");
        for(count=0;count<=i;count++)
        {
            printf("����� � %d.\n", count+1);
            printf("   ��������: %s\n", biblio[count].name);
            printf("   �����:    %s\n", biblio[count].auth);
            printf("   ����:     %g\n", biblio[count].price);
        }

    } else printf("�� ����� �����? ��� ����� �����!\n");

    printf("\nEnd!\n");
    return 0;
}

char *s_gets(char *str, int n)
{
    char *result, *fin;
    result = fgets(str, n, stdin);
    if(result)
    {
        fin=strchr(str, '\n');
        if(fin)
            *fin='\0';
        else while(getchar()!='\n')
                continue;
    }
    return result;
}
