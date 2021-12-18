#include <stdio.h>
#define SIZE 10

int main(void)
{
    int marbles[SIZE]={0,1,2,3,4,5,6,7,8,9};
    int answer;
    int sumf(int *, int *);
    answer= sumf(marbles, marbles+SIZE);
    printf("Summ number of array = %d\n", answer);


    return 0;
}

int sumf(int * start, int * end)
{
    int total=0;
    while(start<end)
    {

        total+=*start;
        start++;
    }




    return total;
}
