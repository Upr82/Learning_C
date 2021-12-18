#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    system("chcp 1251");
    FILE *fp;
    char ch;
    if(argc!=2)
    {
        fprintf(stderr, "Неправильный аргумент. Исползовать так: %s имя.раширение\n",
                argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp=fopen(argv[1],"r"))==NULL)
    {
        fprintf(stderr, "Ошибка открытия файла %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while((ch=getc(fp))!=EOF)
        putc(ch,stdout);

    if(fclose(fp)!=0)
    {
        fprintf(stderr,"Ошибка закрытия файла %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    printf("End!\n");
    return 0;
}
