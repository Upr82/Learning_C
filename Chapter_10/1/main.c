#include <stdio.h>
#define MONTHS 12


int main()
{
    int days[]={31,28,31,30,31,30,31,31,30,31};
    int i;

    for(i=0;i<sizeof (days)/ sizeof (days[0]); i++)
    printf("In month #%2d %d days\n", i+1, days[i]);
    return 0;
}
