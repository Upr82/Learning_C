#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
#define MIN 5

struct book {
char name[SIZE];
char auth[SIZE];
float price;
};

int main()
{
    int choice, i;
    struct book fav_book = {"Book1","Auth1", 1.11};
    int arr[MIN]={9,8,6};
    int *pa;

    printf("%s %s %g\n", fav_book.name, fav_book.auth, fav_book.price);

    printf("Enter 1 or 2: ");
    while(scanf("%d", &choice)!=1 || choice<1 || choice>2)
    {
        while(getchar()!='\n')
            continue;
        printf("Error! Enter 1 or 2: ");
    }
    while(getchar()!='\n')
            continue;
    fav_book =(choice==1)? (struct book){"Book2", "Auth2", 2.22}:

         (struct book){"Book3", "Auth3", 3.33};

    printf("%s %s %g\n\n", fav_book.name, fav_book.auth, fav_book.price);

    for(i=0;i<MIN;i++)
        printf("[%d] = %d\n", i, arr[i]);

    pa=(int []){3,4,5,6,7};
    for(i=0;i<MIN;i++)
        printf("[%d] = %d\n", i, pa[i]);

    printf("Hello world!\n");
    return 0;
}
