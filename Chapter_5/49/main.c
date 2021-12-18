#include <stdio.h>
#include <stdlib.h>

char ch, sdvig;

int i, j, k;

int main()
{
    printf("Enter CHAR: ");
    scanf("%c", &ch);
    sdvig = ch - 65;

    for (i=0;i<sdvig;i++)
    {
        for (ch=42, j=(sdvig-i); j>0; j--) printf("%c", ch);
        for (ch='A', k=0; k<=i; ch++, k++) printf("%c", ch);
        for (;ch>='A';ch--) printf("%c", ch);

        printf("\n");
    }




    return 0;
}
