#include <stdio.h>
#include <stdlib.h>

#define AUTH_SIZE 30
#define NAME_SIZE 40

struct book
    {
        char name[NAME_SIZE];
        char auth[AUTH_SIZE];
        float price;
    };

int main()
{
    struct book library =
    {
        "Как завоёввывать друзей.",
        "Дейл Карнеги.",9.99
    } ;

    /*library.name="Как завоёввывать друзей.";
    library.auth="Дейл Карнеги.";
    library.price=9.99;*/

    system("chcp 1251");

    printf("Название: %s\n", library.name);
    printf("Автор:    %s\n", library.auth);
    printf("Цена:     %f\n", library.price);

    printf("\nEnd!\n");
    return 0;
}
