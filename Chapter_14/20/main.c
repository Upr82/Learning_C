#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

struct book
{
    char auth[SIZE];
    char title[SIZE];
    float price;
};

int main()
{
    system("chcp 1251");

    struct book fav_book;
    int rating;

    printf("Введите рейтинг требуемой книги в процентах.");
    scanf("%d", &rating);
    if(rating>50)
        fav_book=(struct book)
        {
            "Ф.Достоевский",
            "Идиот",
            999.99
        };
    else
        fav_book=(struct book)
        {
            "К.Какойтович",
            "Фигня",
            111.1
        };

    printf("В соответствии с Вашим выбором предлагаю книгу:\n");
    printf("%s авторства %s за %g рублей.\n", fav_book.title, fav_book.auth, fav_book.price);

    printf("\nEnd!\n");
    return 0;
}
