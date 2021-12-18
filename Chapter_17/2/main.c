#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Anton.h"
#define LENGHT 25


//char *s_gets(char *str, int n);

struct film{
char name[LENGHT];
int rating;
struct film *next;
};
typedef struct film MOVIE;
int main()
{
    system("chcp 1251");

    MOVIE *head=NULL, *curr=NULL, *prev=NULL;

    char temp[LENGHT];

    printf("Введите название фильма (пустую строку для завершения): \n");
    while(s_gets(temp, LENGHT)!=0 && temp[0]!='\0')//ok
    {
        curr=(MOVIE *)malloc(sizeof(MOVIE));//ok
        printf("Adress = %p\n", curr);
        if(head==NULL)
            {
                head=curr;//ok
            }
        else
            {
                prev->next=curr;//ok
            }

        strcpy(curr->name, temp);//ok
        printf("Введите рейтинг: \n");//ok
        scanf("%d", &curr->rating);//ok
        while(getchar()!='\n')
            continue;
        curr->next=NULL;//ok
        prev=curr;//ok

        printf("Введите название фильма (пустую строку для завершения): \n");
    }

    if(head==NULL)
        printf("Фильмов нет.\n");
    else
    {
        curr=head;//ok
        while(curr!=NULL)
        {
            printf("У фильма %-24s рейтинг %d\n", curr->name, curr->rating);
            curr=curr->next;
        }

        curr=head;//ok
        //printf("Start adress = %p\n", curr);
        while(curr!=NULL)
        {
            printf("Adress = %p\n", curr);
            free(curr);
            curr=curr->next;


        }
    }

    printf("/nEnd!\n");
    return 0;
}
