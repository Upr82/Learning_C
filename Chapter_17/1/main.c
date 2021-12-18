#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGHT 20
//#define MAX 3

char *s_gets(char *str, int n);

typedef struct {
    char name[LENGHT];
    int rating;
} MOVIE;

void show(MOVIE *f);

int main()
{
    system("chcp 1251");
    //MOVIE film[MAX];
    int num=0, j, MAX=0;

    MOVIE *film;


    printf("������� ������������ ��������� �������: ");
    scanf("%d", &MAX);
    while(getchar()!='\n')
            continue;

    film=(MOVIE *)malloc(MAX*sizeof(MOVIE));

    printf("������� �������� ������ �%d (������ ������ ��� ������): ", num+1);
    while(num<MAX && s_gets(film[num].name, LENGHT)!=NULL && film[num].name[0]!='\0')
    {
        printf("������� ������� ����� ������ (0-10): ");
        scanf("%d", &film[num].rating);
        while(getchar()!='\n')
            continue;
        if(++num<MAX)
            printf("������� �������� ������ �%d (������ ������ ��� ������): ", num+1);
    }
    if(num==0)
        printf("������ �� ������ ������? �����.\n");
    else
    {
        for(j=0;j<num;j++)
        {
            show(film+j);
        }
    }

    free(film);
    printf("\nHello world!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result=NULL, *fin=NULL;
    result=fgets(str, n, stdin);
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
void show(MOVIE *f)
{
    printf("��������: %-20s, �������: %d;\n", f->name, f->rating);
}
