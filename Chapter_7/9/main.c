#include <stdio.h>
#include <stdlib.h>

char ch, old_ch=0;
int count_c=0, count_w=0, count_s=0;

int main()
{
    printf("Please, enter text:\n");
    ch=getchar();
    while (ch!='|')
    {
        if (!isspace(ch)) count_c++;
        if (!isspace(old_ch) && isspace(ch)) count_w++;
        if (ch=='\n') count_s++;
        old_ch=ch;
        ch=getchar();
        if (ch=='|')
        {
            count_s++;
            count_w++;
        }
    }
    printf("In current text %d symbols, %d words, %d strings.", count_c, count_w, count_s);

    return 0;
}
