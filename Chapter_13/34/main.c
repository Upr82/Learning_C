#include <stdio.h>
#include <stdlib.h>

#define NAME 30

int main()
{
    char name[NAME];
    FILE *fp;
    int ch=0,er=0;
    long pos;

    system("chcp 1251");

    fprintf(stdout,"Введите имя файла: ");
    while(fscanf(stdin,"%30s",name)!=1)
    {
        fprintf(stderr,"Ошибка! Введите имя файла: ");
    }


    while((fp=fopen(name,"r"))==NULL)
    {
        fprintf(stderr,"Ошибка! Не могу открыть файл %s.\n",name);
        fprintf(stdout,"Введите имя файла: ");
        while(fscanf(stdin,"%30s",name)!=1)
        {
            fprintf(stderr,"Ошибка! Введите имя файла: ");
        }
    }

    fprintf(stdout,"Введите порядковый номер символа, от которого следует\n");
    fprintf(stdout,"произвести чтеное до символа новой строки (или до конца файла).\n");
    fprintf(stdout,"Для выхода введите отрицательное или нечисловое значение: ");
    while(fscanf(stdin,"%ld",&pos)==1 && pos>0)
    {
        if((er=fseek(fp,pos,SEEK_SET))!=0)
        {
            fprintf(stderr,"Ошибка! Выход за пределы файла.\n");
        } else
        {
            while((ch=getc(fp))!= EOF && ch!='\n')
                putc(ch,stdout);
        }
        rewind(fp);
        fprintf(stdout,"\nВведите порядковый номер символа, от которого следует\n");
        fprintf(stdout,"произвести чтеное до символа новой строки (или до конца файла).\n");
        fprintf(stdout,"Для выхода введите отрицательное или нечисловое значение: ");
    }

    if(fclose(fp))
    {
        fprintf(stderr,"Ошибка закрытия файла %s.\n", name);
        exit(EXIT_FAILURE);
    }

    printf("\nEnd!\n");
    return 0;
}
