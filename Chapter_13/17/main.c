#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81
#define BUFSIZE 4096

void append(FILE *source, FILE *dest);
char *s_gets(char *st, int n);

int main()
{
    FILE *fa, *fs;
    int files=0;
    char file_app[SLEN];
    char file_src[SLEN];
    int ch;

    system("chcp 1251");
    puts("Введите имя файла назначения.");
    s_gets(file_app,SLEN);
    if((fa=fopen(file_app,"a+"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия файла %s.\n",file_app);
        exit(EXIT_FAILURE);
    }
    if(setvbuf(fa,NULL,_IOFBF,BUFSIZE)!=0)
    {
        fprintf(stderr,"Ошибка создания выходного буфера.\n");
        exit(EXIT_FAILURE);
    }
    fprintf(stdout,"Введите имя первого исходного файла, или пустую строку для завершения.\n");
    while(s_gets(file_src,SLEN) && file_src[0]!='\0')
    {
        if(strcmp(file_app,file_src)==0)
        {
            fprintf(stderr,"Нельзя скоприровать файл сам в себя.\n");
        }
        else if((fs=fopen(file_src,"r"))==NULL)
            {
                fprintf(stderr,"Не могу открыть файл %s\n",file_src);
            }
            else
            {
                if(setvbuf(fs, NULL, _IOFBF,BUFSIZE)!=0)
                {
                    fprintf(stderr,"Ошибка создания входного буфера.\n");
                    continue;
                }
                append(fs,fa);
                if(ferror(fs)!=0)
                    fprintf(stderr,"Ошибка при чтении файла %s.\n", file_src);
                if(ferror(fa)!=0)
                    fprintf(stderr,"Ошибка при чтении файла %s.\n", file_app);
                fclose(fs);
                files++;
                fprintf(stdout,"Содержимое файла %s добавлено в файл %s.\n", file_src, file_app);
                fprintf(stdout,"Введите имя следующего файла (или пустую строку для завешения):\n");
            }
    }
    fprintf(stdout,"Добавление завершено. Количество добавленных файлов = %d.\n", files);
    rewind(fa);
    fprintf(stdout,"Содержимое %s:\n", file_app);

    while((ch=getc(fa))!=EOF)
        putc(ch,stdout);
    fclose(fa);

    printf("\nEnd!\n");
    return 0;
}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];
    while((bytes=fread(temp,sizeof(char),BUFSIZE,source))>0)
        fwrite(temp,sizeof(char),bytes,dest);
}

char *s_gets(char *st, int n)
{
    char *result;
    char *find;
    result=fgets(st,n,stdin);
    if(result)
    {
        find=strchr(st,'\n');
        if(find)
            *find='\0';
        else
            while(getchar()!='\n')
                continue;
    }
    return result;
}


