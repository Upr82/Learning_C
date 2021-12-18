#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main()
{
    char *name ="array.txt";
    int i;
    double d;
    double ar_d[ARSIZE];
    long position;
    FILE *fp;

    system("chcp 1251");

    if((fp=fopen(name,"wb"))==NULL)
    {
        puts("Ошибка создания файла.");
        exit(EXIT_FAILURE);
    }

    for(i=0;i<ARSIZE;i++)
        ar_d[i]=i+(double)i/1000;

    if(fwrite(ar_d,sizeof(double),ARSIZE,fp)!=ARSIZE)
    {
        puts("Ошибка записи в файл.");
    }
    if(fclose(fp))
    {
        puts("Ошибка закрытия файла.");
        exit(EXIT_FAILURE);
    }

    puts("Создан файл и в него помещён архив с 1000 элементами double.");

    if((fp=fopen(name,"rb"))==NULL)
    {
        puts("Не могу повторно открыть файл.");
        exit(EXIT_FAILURE);
    }

    fprintf(stdout,"Введите номер нужного элемента (от 0 до %d): ",ARSIZE-1);
    while(scanf("%d", &i)==1 && i>=0 && i<ARSIZE)
    {
        position=(long)(i*sizeof(double));
        fseek(fp, position,SEEK_SET);
        fread(&d,sizeof(double),1,fp);
        fprintf(stdout,"В ячейке № %d находится число %.3f.\n", i,d);

        fprintf(stdout,"Введите номер нужного элемента (от 0 до %d): ",ARSIZE-1);
    }

    if(fclose(fp))
    {
        puts("Ошибка вторичного закрытия файла");
        exit(EXIT_FAILURE);
    }

    printf("\nEnd!\n");
    return 0;
}
