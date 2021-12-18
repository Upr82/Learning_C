#include <stdio.h>

void chline (char, int, int);

int main(void)
{
    chline('+',50,5);


    return 0;
}

void chline (char ch, int i, int j)
{//i - סעמכבצמג, j - סענמך,
    int a,b;
    for(a=1;a<=j;a++)
    {
        for(b=1;b<=i;b++)
            putchar(ch);
        putchar('\n');
    }

}
