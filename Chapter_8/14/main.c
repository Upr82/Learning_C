#include <stdio.h>
#include <ctype.h>

char ch;
int HIGH=0, LO=0, others=0, Di=0;

int main(void)
{
    while((ch=getchar())!=EOF)
    {
        if (isupper(ch))
        {
            HIGH++;
            continue;
        }
        if (islower(ch))
        {
            LO++;
            continue;
        }
        if (isdigit(ch))
        {
            Di++;
            continue;
        }
        others++;
    }
    printf("High = %d, low = %d, Digit = %d others = %d.\n", HIGH, LO, Di, others);

    return 0;
}
