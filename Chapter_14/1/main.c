#include <stdio.h>
#include <stdlib.h>

#define AUTH_SIZE 41
#define BOOK_SIZE 61
#define BIBLIO 3

char *s_gets(char *str, int n);

struct book
{
    char name[BOOK_SIZE];
    char auth[AUTH_SIZE];
    float price;
};

int main()
{
    struct book my_book[BIBLIO];
    int i;

    system("chcp 1251");

    for(i=0;i<BIBLIO;i++)
    {
        fprintf(stdout,"Введите название книги № %d: ", i+1);
        s_gets(my_book[i].name,BOOK_SIZE);
        printf("Введите ФИО автора книги № %d: ", i+1);
        s_gets(my_book[i].auth, AUTH_SIZE);
        printf("Введите стоимость книги № %d: ", i+1);
        fscanf(stdin,"%10f", &my_book[i].price);
        getchar();
    }

    puts("Вот, что Вы ввели: ");
    for(i=0;i<BIBLIO;i++)
    {
        fprintf(stdout,"Название книги № %d: %s;\n", i+1, my_book[i].name);
        fprintf(stdout,"Автор книги № %d: %s;\n", i+1, my_book[i].auth);
        fprintf(stdout,"Цена книги № %d:  %.2f.\n", i+1, my_book[i].price);
    }
    printf("\nEnd!\n");
    return 0;
}

char *s_gets(char *str,int n)
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
