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

    printf("Введите название книги или пустую строку для завершения: \n");
    while(i<MAXBOOK && s_gets(biblio[i].name, SIZE)!=NULL && biblio[i].name[0]!='\0')
    {
        printf("Введите автора: \n");
        s_gets(biblio[i].auth, SIZE);
        printf("Введите цену: \n");
        scanf("%f", &biblio[i].price);
        while(getchar()!='\n')
            continue;
        i++;
        printf("Введите название книги или пустую строку для завершения: \n");
    }

    if(i>0)
    {
        printf("\nВот список введённых Вами книг: \n");
        for(count=0;count<=i;count++)
        {
            printf("Книга № %d.\n", count+1);
            printf("   Название: %s\n", biblio[count].name);
            printf("   Автор:    %s\n", biblio[count].auth);
            printf("   Цена:     %g\n", biblio[count].price);
        }

    } else printf("Ни одной книги? Это очень плохо!\n");

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
