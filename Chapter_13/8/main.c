#include <stdio.h>
#include <stdlib.h>
#define MY_FILE "file1.txt"

int main()
{
    int ch;
    system("chcp 1251");
    FILE *fp;
    if((fp=fopen(MY_FILE, "wx"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия файла %s\n", MY_FILE);
        exit(EXIT_FAILURE);
    }

    while((ch=getc(stdin))!=EOF)
        {
            putc(ch,fp);
            putchar(ch);
        }


    if(fclose(fp)!=0)
    {
        fprintf(stderr, "Ошибка закрытия файла %s\n.", MY_FILE);
        exit(EXIT_FAILURE);
    }
    printf("End!\n");
    return 0;
}
