#include <stdio.h>
#include <limits.h>
#define SIZE 10

int print(char *, char *);

int main(void)
{
    char marbles [SIZE]={65,66,67,68,69,70,71,72,73,74};
    printf("Type Short = %u bytes or %d bits\n", sizeof(short), sizeof(short)*CHAR_BIT);

    printf("Summ unit array = %d\n",print(marbles, marbles+SIZE));

    return 0;
}

int print(char *start, char *stop)
{
    int total=0;
    while(start<stop)
    {
        printf("adress = %p, *p = %c\n", start, *start);
        total+=*start++;
    }
    return total;
}
