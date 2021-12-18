#include <stdio.h>
#include <stdlib.h>

char a,b;

int main()
{
    printf("Hello world!\n");
    for (a='a'; a<='z'; a--)
    {
        for(b='a';b<=a; b++) printf("%c", b);
        printf("\n");
    }
    return 0;
}
