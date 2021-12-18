#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20
#define MAXBOOK 10
#define MFILE "1.txt"

struct book {
char name[SIZE];
char auth[SIZE];
float price;
};
char *s_gets(char *str, int n);

void show(const struct book temp[], int n);

int main()
{
    system("chcp 1251");
    struct book biblio[MAXBOOK];
    FILE *fp=NULL;
    int i=0;


    fp=fopen(MFILE, "ab+");
    if(fp==NULL)
    {
        fprintf(stderr, "Error open file %s\n", MFILE);
        exit(EXIT_FAILURE);
    }

    rewind(fp);

    while(i<MAXBOOK && fread(&biblio[i], sizeof(struct book), 1, fp)!=0)
    {
        i++;
    }

    if(i>0)
        show(biblio, i);

    if(i<MAXBOOK)
    {
        printf("Для добавления новой книги введите её название, для выхода - пустую строку.\n");
        while(i<MAXBOOK && s_gets(biblio[i].name, SIZE)!=NULL && biblio[i].name[0]!='\0')
        {
            printf("Введите автора книги: \n");
            s_gets(biblio[i].auth, SIZE);
            printf("Введите стоимость книги: \n");
            scanf("%f", &biblio[i].price);
            while(getchar()!='\n')
                continue;

            fwrite(&biblio[i], sizeof(struct book), 1, fp);

            i++;
            if(i<MAXBOOK)
                printf("для добавления новой книги введите её название, для выхода - пустую строку.\n");
        }


    } else printf("Библиотека заполнена.\n\n");


    if(i==0)
        printf("Вообще нет книг? Очень плохо.\n");
    else
            {
                printf("Вот Ваша библиотека: \n");
                rewind(fp);
                show(biblio, i);
            }


    if(fclose(fp))
    {
        fprintf(stderr, "Error close file %s\n", MFILE);
        exit(EXIT_FAILURE);
    }
    printf("\nEnd!\n");
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
void show(const struct book temp[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("Книга №%d: %s авторства %s за %.2f рублей.\n",
               i+1, temp[i].name, temp[i].auth, temp[i].price);
}
