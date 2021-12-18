#include <stdio.h>
#include <stdlib.h>
#define SIZE 40

struct owner
{
    char name[40];
};
struct company
{
    char company_name[40];
    char headquarters[40];
};
union data
{
    struct owner owncar;
    struct company leasecar;
};

struct car_data
{
    char name[SIZE];
    int status;
    union data cur_auto;
};
int main()
{
    system("chcp 1251");
    struct car_data k963vo =


    printf("Hello world!\n");
    return 0;
}
