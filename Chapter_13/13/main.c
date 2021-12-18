#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 41

int main()
{
    system("chcp 1251");
    char my_str[SIZE];
    FILE *fp;
    int ch;

    fprintf(stdout,"Введите имя файла.\n");
    fscanf(stdin,"%s", my_str);

    while(getchar()!='\n')
        continue;

    if((fp=fopen(my_str,"a+"))==NULL)
        {
            fprintf(stderr,"Ошибка открытия или создания файла %s.\n", my_str);
            exit(EXIT_FAILURE);
        }
    rewind(fp);

    while((ch=getc(fp))!=EOF)
    {
        putc(ch,stdout);
    }

    fprintf(stdout, "Введите свой текст.\n");
    while(fgets(my_str, SIZE-1, stdin)!=NULL && my_str[0]!='\n')
    {
        fputs(my_str, fp);
    }

    rewind(fp);

    fprintf(stdout, "Вот что получилось!\n");

    while(fgets(my_str, SIZE-1, fp)!=NULL)
    {
        fputs(my_str, stdout);
    }
    if(fclose(fp)!=0)
    {
        fprintf(stdout, "Ошибка закрытия файла.\n");
        exit(EXIT_FAILURE);
    }

    fprintf(stdout, "End!\n");
    return 0;
}
