#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SDVIG 2

int char_count(FILE *f, char c);

int main(int argc, char *argv[])
{
    int ch, i;
    FILE *fp;

    system("chcp 1251");

    if(argc<2)
    {
        fprintf(stdout, "Ошибка! Использовать так: текущий файл символ имена исходных файлов(при необходимости).");
        exit(EXIT_FAILURE);
    }

    ch=argv[1][0];

    if(argc==2)
    {
        puts("Выбран ввод строк с клавиатуры. Для звершения ввода ^Z.");
        fprintf(stdout,"Во введённой строке содержится %d символов \"%c\".\n",char_count(stdin,ch), ch);
    }
    if(argc>2)
    {
        for(i=SDVIG;i<argc;i++)
        {
            if((fp=fopen(argv[i],"r"))==NULL)
            {
                fprintf(stderr,"Ошибка, не могу открыть файл %s\n",argv[i]);
                continue;
            }
            fprintf(stdout,"В файле %s содержится %d символов \"%c\".\n",argv[i], char_count(fp,ch), ch);
            if(fclose(fp))
            {
                fprintf(stderr,"Ошибка закрыия файла %s\n", argv[i]);
            }
        }
    }

    printf("\nEnd!\n");
    return 0;
}
int char_count(FILE *f, char c)
{
    int count=0, ch=0;

    while((ch=getc(f))!=EOF)
    {
        if(ch==c)
            count++;
    }
    return count;
}
