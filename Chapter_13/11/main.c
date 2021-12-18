#include <stdio.h>
#include <stdlib.h>
#define SIZE 16

int main()
{
    system("chcp 1251");
    FILE *in, *out;
    int ch=0;
    char name1[SIZE];
    char name2[SIZE];
    puts("Введите имя исходного файла.");
    while(fscanf(stdin,"%s",name1)!=1)
    {
        puts("Ошибка! Правильно введите имя исходного файла.");
    }

    if((in=fopen(name1,"a+"))==NULL)
    {
        printf("Ошибка открытия файла %s\n.",name1);
    }
    while(ch=fgetc(in))
        fputc(ch,stdout);
    puts("Введите ваш текст.");
    while((ch=fgetc(stdin))!=EOF)
        {
            fputc(ch,in);
            putchar(ch);
        }

    fclose(in);

    printf("End!\n");
    return 0;
}
