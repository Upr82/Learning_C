#include <stdio.h>
#include <stdlib.h>
#include "Anton.h"
#include "list.h"

void showmovies(Item item);

int main()
{
    system("chcp 1251");

    List movies;
    Item temp;

    InitializeList(&movies);
    if(ListIsFull(&movies))
    {
        fprintf(stderr,"Свободная память отсутствует. Программа завершена!\n");
        exit(1);
    }
    //сбор и сохранение информации
    puts("Введите название первого фильма: ");
    while(s_gets(temp.title, TSIZE)!=NULL && temp.title[0]!='\0')
    {
        puts("Введите значение рейтинга: ");
        scanf("%d", &temp.rating);
        eat_line();

        if(AddItem(temp, &movies)==false)
        {
            fprintf(stderr, "Проблема с выделением памяти.\n");
            break;
        }
        if(ListIsFull(&movies)==true)
        {
            fprintf(stderr, "Список полон.\n");
            break;
        }
        puts("Введите название следующего фильма (или пустую строку для завершения): ");
    }
    //отображение
    if(ListIsEmpty(&movies))
    {
        printf("Данные не введены.\n");
    } else
    {
        printf("Список фильмов: \n");
        Traverse(&movies, showmovies);
    }

    printf("Вы ввели %d фильмов.\n", ListItemCount(&movies));

    EmptyTheList(&movies);

    printf("\nEnd!\n");
    return 0;
}

void showmovies(Item item)
{
    printf("Фильм: %-44s, рейтинг: %d\n", item.title, item.rating);
}
