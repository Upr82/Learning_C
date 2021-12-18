#include <stdio.h>
#include <stdlib.h>
#define SIZE 81
#define CNRL_Z '\036'

int main()
{
    system("chcp 1251");
    FILE *fp;
    long last, cur;
    char file_name[SIZE];
    int ch;

    fprintf(stdout, "Введите имя файла.\n");
    fscanf(stdin,"%80s",file_name);
    if((fp=fopen(file_name,"rb"))==NULL)
    {
        fprintf(stdout, "Ошибка открытия %s.\n", file_name);
        exit(EXIT_FAILURE);
    }

    while((ch=getc(fp))!=EOF)
        putc(ch,stdout);
    putc('\n',stdout);

    fseek(fp,0L,SEEK_END);
    last=ftell(fp);

    for(cur=1L;cur<=last;cur++)
    {
        fseek(fp,-cur,SEEK_END);
        {
            ch=getc(fp);
            //if(ch!=CNRL_Z && ch!='\r')
                fprintf(stdout, "[%ld] = %c - '%d'\n",cur,ch,ch);
        }
    }
    if(fclose(fp)!=0)
    {
        fprintf(stdout, "Ошибка закрытия файла %s.\n", file_name);
        exit(EXIT_FAILURE);
    }
    printf("\nEnd!\n");
    return 0;
}
