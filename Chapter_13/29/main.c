#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
#define NAME "1.txt"

int main(int argc, char *argv[])
{
    FILE *fp;
    double arr[SIZE];
    int i;
    double d;
    long pos;
    int key;

    system("chcp 1251");

    for(i=0;i<SIZE;i++)
        arr[i]=i+(double)i/1000;

    if((fp=fopen(NAME,"wb"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия файла для записи данных.\n");
        exit(EXIT_FAILURE);
    }
    if(fwrite(arr,sizeof(double),SIZE,fp)==0)
        fprintf(stderr,"Ошибка записи данных в файл.\n");
    else fprintf(stdout,"Данные успешно записаны в файл.\n");
    if(fclose(fp))
    {
        fprintf(stderr,"Ошибка сохранения и закрытия файла.\n");
        exit(EXIT_FAILURE);
    }

    fp=fopen(NAME, "rb");

    for(i=1;i<argc;i++)
    {
        key=atoi(argv[i]);
        pos=(long)key*sizeof(double);
        fseek(fp,pos,SEEK_SET);
        fread(&d,sizeof(double),1,fp);
        fprintf(stdout,"В ячейке № %d значение %g\n", key, d);
    }
    fclose(fp);
    printf("\nEnd!\n");
    return 0;
}
