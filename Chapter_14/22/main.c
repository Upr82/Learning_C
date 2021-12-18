#include <stdio.h>
#include <stdlib.h>

struct book
{
    int a;
    int b;
};

int sum(struct book info);
int main()
{

    printf("Summa = %d\n", sum((struct book){2,3}));


    printf("Hello world!\n");
    return 0;
}
int sum(struct book info)
{
    return (info.a+info.b);
}
