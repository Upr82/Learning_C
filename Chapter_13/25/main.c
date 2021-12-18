#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 20

int main()
{
    char file_name[SIZE];
    int ch;
    FILE *fp;

    system("chcp 1251");

    puts("Введите имя файла для чтения.");
    if(scanf("%s", file_name)==1 && file_name[0]!='\0')
    {
        if((fp=fopen(file_name,"r"))==NULL)
        {
            puts("Error opening file.");
            exit(EXIT_FAILURE);
        }
        while((ch=getc(fp))!=EOF)
            putc(ch,stdout);
        if(fclose(fp))
        {
            puts("Error close file.");
            exit(EXIT_FAILURE);
        }
    }

    printf("Hello world!\n");
    return 0;
}
