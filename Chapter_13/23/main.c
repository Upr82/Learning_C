#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(int argc, char *argv[])
{
    FILE *fp;
    int i=0;
    double sum=0.0;
    double arr[SIZE]={0.0};

    system("chcp 1251");

    if(argc>1)
    {
        if((fp=fopen(argv[1],"r"))==NULL)
        {
            puts("Ошибка открытия файла.");
            exit(EXIT_FAILURE);
        }
        while(i<SIZE && fscanf(fp,"%lf",&arr[i])==1 && arr[i]!=0.0)
        {
            sum+=arr[i++];
        }
        fprintf(stdout,"Среднее арифметическое прочитанных чисел = %g\n", sum/i);
        if(fclose(fp))
        {
            puts("Ошибка закрытия файла.");
            exit(EXIT_FAILURE);
        }

    } else
    {
        while(i<SIZE && fscanf(stdin,"%lf",&arr[i])==1 && arr[i]!=0.0)
            sum+=arr[i++];
        fprintf(stdout,"Среднее арифметическое введённых чисел = %g\n", sum/i);
    }

    printf("\nEnd!\n");
    return 0;
}
