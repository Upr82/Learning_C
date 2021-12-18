#include <stdio.h>
#include <stdlib.h>

int ch;
FILE * fp;
char fname [50]="44";

int main(void)
{
    printf("Enter file name: ");
    //scanf("%s", fname);
    fp = fopen(fname, "r");
    if (fp==NULL)
    {
        printf("Error open file.\n");
        exit(1);
    }
    while((ch=getc(fp))!=EOF)
        putchar(ch);
    fclose(fp);




    return 0;
}
