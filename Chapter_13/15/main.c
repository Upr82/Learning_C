#include <stdio.h>
#include <stdlib.h>
#define CTRL_Z '\032'
#define FILE_NAME "1.txt"

int main()
{
    FILE *fp;
    fpos_t *pos;
    long l;
    pos=&l;
    int ch;


    system("chcp 1251");

    if((fp=fopen(FILE_NAME,"r"))==NULL)
    {
        fprintf(stdout,"Не могу открыть файл %s.\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }
    fprintf(stdout,"Вот что в файле:\n");
    while((ch=getc(fp))!=EOF)
    {
        fgetpos(fp, pos);
        fprintf(stdout,"%c - %ld\n", ch, *pos);
    }
    l=1L;
    fsetpos(fp,l);

    while((ch=getc(fp))!=EOF)
    {
        fgetpos(fp, pos);
        //if((*pos)%2==0)
        {
            putc(ch, stdout);
        }
    }


    if(fclose(fp)!=0)
    {
        fprintf(stderr,"Не могу закрыть файл %s.\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }
    printf("Hello world!\n");
    return 0;
}

