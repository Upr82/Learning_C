#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 256
int main(int argc, char *argv[])
{
    FILE *fp;
    char arr[SIZE];
    char *start;

    system("chcp 1251");

    if(argc!=3)
    {
        fprintf(stderr,"Ошибка! Использовать так: текущий_файл искомая_строка файл_источник.\n");
        exit(EXIT_FAILURE);
    }

    if((fp=fopen(argv[2],"r"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия файла %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while(fgets(arr,SIZE,fp)!=NULL)
    {
        if((start=strstr(arr,argv[1]))!=NULL)
            fprintf(stdout,"%s",start);
    }

    if(fclose(fp))
    {
        fprintf(stderr,"Ошибка закрытия файла %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    printf("\nEnd!\n");
    return 0;
}
