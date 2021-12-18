#include <stdio.h>
#include <stdlib.h>
#define SIZE 35
#define FILENAME "5.txt"

struct book
{
    char auth[SIZE];
    char name[SIZE];
    float price;
};
void getinfo(struct book *temp);
void showinfo(const struct book *temp);

int main()
{

    struct book my_book, new_book;
    FILE *fb;
    if((fb=fopen(FILENAME, "w+"))==NULL)
    {
        printf("Error open file %s\n", FILENAME);
        exit(EXIT_FAILURE);
    }

    system("chcp 1251");
    getinfo(&my_book);

    fwrite(&my_book, sizeof(struct book), 1, fb);

    rewind(fb);

    fread(&new_book, sizeof(struct book), 1, fb);

    showinfo(&new_book);

    if(fclose(fb))
    {
        printf("Error close file %s.", FILENAME);
        exit(EXIT_FAILURE);
    }

    printf("\nHello world!\n");
    return 0;
}
void getinfo(struct book *temp)
{
    printf("Введите имя автора: ");
    scanf("%s", temp->auth);
    while(getchar()!='\n')
        continue;
    printf("Введите название книги: ");
    scanf("%s", temp->name);
    while(getchar()!='\n')
        continue;
    printf("Введите цену книги: ");
    scanf("%f", &temp->price);
};
void showinfo(const struct book *temp)
{
    printf("Вот, что вычитали из файла и поместили в структуру:\n");
    printf("Имя автора: %s\n", temp->auth);
    printf("Название: %s\n", temp->name);
    printf("Цена: %g\n", temp->price);
}
