#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    system("chcp 1251");
    FILE *in, *out;
    int ch, count=0, len;


    if(argc!=2)
    {
        fprintf(stderr,"Ошибка арументаб использовать так: %s имя_файла.расширение\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((in=fopen(argv[1],"r"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия файла %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    len=strlen(argv[1]);
    char name[len+5];
    strcpy(name,argv[1]);
    strcat(name,".aaa");
    name[len+4]='\0';

    if((out=fopen(name,"w"))==NULL)
    {
        fprintf(stderr, "Ошибка открытия файла %s\n", name);
        exit(EXIT_FAILURE);
    }

    while((ch=getc(in))!=EOF)
    {
        if((count++)%3==0)
        {
            putc(ch, out);
            putc(ch, stdout);
        }
    }

    if(fclose(in)!=0 || fclose(out)!=0)
    {
        fprintf(stderr,"Ошибка закрытия файлов.\n");
        exit(EXIT_FAILURE);
    }

    printf("End!\n");
    return 0;
}
