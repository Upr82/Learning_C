#include <stdio.h>
#include <stdlib.h>
#define SIZE 41

int main()
{
    system("chcp 1251");
    char word[SIZE];
    FILE *fp;

    puts("Введите имя файла.");
    scanf("%s",word);
    if((fp=fopen(word,"a+"))==NULL)
    {
        fprintf(stdout,"Ошибка открытия файла %s.\n", word);
        exit(EXIT_FAILURE);
    }
    puts("Вводите текст, для окончания введите # в начале строки.");
    while(fscanf(stdin,"%40s",word)==1 && word[0]!='#')
        fprintf(fp,"%s\n",word);
    rewind(fp);
    puts("Вот что получилось:");
    while(fscanf(fp,"%s",word)!=EOF)
        fprintf(stdout,"%s\n",word);

    if(fclose(fp)!=0)
    {
        fprintf(stderr,"Не могу закрыть файл.\n");
        exit(EXIT_FAILURE);
    }
    printf("\nEnd!\n");
    return 0;
}
