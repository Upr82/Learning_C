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

    printf("Введите название книги № %d, для завершения введите пустую строку.\n", i+1);

    while(i<MAXBOOK && s_gets(biblio[i].name,SIZE)!=NULL && biblio[i].name[0]!='\0')
    {
        printf("Введите автора книги: ");
        s_gets(biblio[i].auth, SIZE);
        printf("Введите цену книги  : ");
        fscanf(stdin,"%f", &biblio[i].price);
        while(getchar()!='\n')
            continue;

        count++;
        printf("Введите название книги № %d, для завершения введите пустую строку.\n", ++i+1);
    }


    puts("Вот что Вы ввели:");
    for(i=0;i<count;i++)
    {
        printf("Книга № %d:\n", i+1);
        printf("%-20s: %s\n","Название", biblio[i].name);
        printf("%-20s: %s\n","Автор", biblio[i].auth);
        printf("%-20s: %.2f\n", "Цена", biblio[i].price);
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
