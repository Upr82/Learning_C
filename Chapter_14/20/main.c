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

    printf("������� ������� ��������� ����� � ���������.");
    scanf("%d", &rating);
    if(rating>50)
        fav_book=(struct book)
        {
            "�.�����������",
            "�����",
            999.99
        };
    else
        fav_book=(struct book)
        {
            "�.����������",
            "�����",
            111.1
        };

    printf("� ������������ � ����� ������� ��������� �����:\n");
    printf("%s ��������� %s �� %g ������.\n", fav_book.title, fav_book.auth, fav_book.price);

    printf("\nEnd!\n");
    return 0;
}
