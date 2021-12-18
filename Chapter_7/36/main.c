#include <stdio.h>
#include <ctype.h>

char ch;
int new_string=0, spase=0, others;
int main (void)
{
    while((ch=getchar())!='#')
    {
        if (ch=='\n')
        new_string++;


        else if (isspace(ch))
            spase++;
                else others++;
    }
    printf("New string = %d, Space = %d, Others = %d.\n", new_string, spase, others);

    getchar();
    return 0;
}
