#include <stdio.h>
#include <ctype.h>

char ch;
int j,i=0;

int main(void)
{
    while((ch=getchar())!=EOF)
    {
        if (ch=='\n') printf("\\n=%d ", ch);
        else if (ch=='\t') printf("\\t=%d ", ch);
        else if (ch==' ') printf("' '=%d ", ch);
        else printf("%c=%d ", ch, ch);
        i++;
        if ((i%10)==0) printf("\n");
    }



    return 0;
}
