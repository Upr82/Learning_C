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
        "��� ����������� ������.",
        "���� �������.",9.99
    } ;

    /*library.name="��� ����������� ������.";
    library.auth="���� �������.";
    library.price=9.99;*/

    system("chcp 1251");

    printf("��������: %s\n", library.name);
    printf("�����:    %s\n", library.auth);
    printf("����:     %f\n", library.price);

    printf("\nEnd!\n");
    return 0;
}
