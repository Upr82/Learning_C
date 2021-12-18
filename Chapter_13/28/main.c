#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,ch;
    FILE *fp;

    system("chcp 1251");
    for(i=1;i<argc;i++)
    {
        if((fp=fopen(argv[i],"r"))==NULL)
        {
            fprintf(stderr,"������ �������� ����� %s\n",argv[i]);
            continue;
        }
        fprintf(stderr,"\n���������� ����� � %d (%s):\n", i,argv[i]);
        while((ch=getc(fp))!=EOF)
            putc(ch,stdout);
        if(fclose(fp))
        {
            fprintf(stderr,"������ �������� ����� %s.\n", argv[i]);
            exit(EXIT_FAILURE);
        }
    }


    printf("\nHello world!\n");
    return 0;
}
