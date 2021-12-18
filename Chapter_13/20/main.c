#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 32
#define STLEN 11

int main()
{
    FILE *source;
    size_t bytes=0;
    char temp[BUFSIZE];
    char source_name[STLEN];
    int count=0;

    system("chcp 1251");
    puts("Введи имя файла для чтения: ");
    if(scanf("%s", source_name)==1 && source_name[0]!='\0')
    {
        if((source=fopen(source_name,"r"))==NULL)
        {
            exit(EXIT_FAILURE);
        }
        while((bytes=fread(temp,sizeof(char),STLEN,source))>0)
        {
            fwrite(temp,sizeof(char),bytes,stdout);
            count++;
        }
    }
    fclose(source);

    printf("Было сделано %d итераций.\n", count);

    printf("\nEnd!\n");
    return 0;
}
