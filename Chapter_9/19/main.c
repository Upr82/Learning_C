#include <stdio.h>
#include <ctype.h>

int char_view(char);
char ch;
int main(void)
{

    while((ch=getchar())!=EOF)
    {
        char_view(ch);
    }
    return 0;
}

int char_view(char ch)
{
    int number, start;
        if (isalpha(ch))
        {
            if(islower(ch)) start=96;
            else start = 64;
            number=ch-start;
            printf("%c - char, #%d\n", ch, number);
        } else
        {
            number=-1;
            printf("%c - no char, #%d\n", ch, number);
        }

    return number;
}
