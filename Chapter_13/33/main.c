#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NAME 32
#define SIZE 40

int main()
{
    char name[NAME];
    char words[SIZE];
    FILE *fp;
    int i=1,n;

    system("chcp 1251");

    fprintf(stdout,"Введите имя файла для добавления слов: ");
    while(fscanf(stdin,"%40s", name)!=1 || name[0]=='\0')
    {
        fprintf(stderr, "Ошибка! Введите имя файла для добавления слов: ");
    }

    while((fp=fopen(name,"a+"))==NULL)
    {
        fprintf(stderr, "Ошибка! Не могу открыть файл %s, проверьте имя файла.\n", name);
    }

    rewind(fp);

    while(fscanf(fp,"%s",words)==1)
    {
        i++;
        fprintf(stdout,"%s\n",words);
    }

    fprintf(stdout,"Теперь вводите свои слова, для завершения символ # в начале строки.\n");
    while((fscanf(stdin,"%40s",words)==1) && (words[0]!='#'))
        fprintf(fp,"%d%s\n",i++, words);

    fprintf(stdout, "Вот что получилось:\n");
    rewind(fp);

    while(fscanf(fp,"%s",words)==1)
    {
        fprintf(stdout,"%s\n",words);
    }

    if(fclose(fp))
    {
        fprintf(stderr,"Ошибка! Не могу закрыть файл %s.\n", name);
        exit(EXIT_FAILURE);
    }

    printf("\nEnd!\n");
    return 0;
}
