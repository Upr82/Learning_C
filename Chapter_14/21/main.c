#include <stdio.h>
#include <stdlib.h>

struct mas
{
    int a;
    int b;
};
int sum(struct mas *temp);

int main()
{
    int result;
    system("chcp 1251");

    result=sum(&(struct mas){1,2});

    printf("Result = %d\n", result);
    return 0;
}

int sum(struct mas *temp)
{
    return (temp->a+temp->b);
}
