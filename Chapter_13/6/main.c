#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define STRSIZE 81

char* d_t_filename(void);


int main(void)
{
    system("chcp 1251");
    FILE *fp;
    char *my_file;
    char str[STRSIZE];
    my_file=d_t_filename();

    if((fp=fopen(my_file, "a+"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия файла %s\n", my_file);
        exit(EXIT_FAILURE);
    }
    fprintf(fp,"%s\n",my_file);
    puts("Вводите свой текст, для завершения в начале строки введите #.");
    while(scanf("%s", str)==1 && str[0]!='#')
    {
        fprintf(fp,"%s\n",str);
    }
    rewind(fp);
    while(fscanf(fp,"%s",str)==1)
    {
        puts(str);
    }

    if(fclose(fp)!=0)
    {
        fprintf(stderr,"Ошибка сохранения файла.\n");
    }
    puts("Вот и всё!");
    getchar();
    getchar();
  return 0;
}
char * d_t_filename(void)
{
    static char name[25];
    char dateStr [9];
    char timeStr [9];
    int i;
    _strdate(dateStr);
    _strtime(timeStr);
    strncpy(name,dateStr,8);
    name[8]='_';
    strncpy(name+9,timeStr,9);
    strncat(name,".txt",5);
    for(i=0;i<25;i++)
    {
        if(name[i]=='/') name[i]='_';
        if(name[i]==':') name[i]='-';
        //printf("[%d] = '%c' - %d\n", i, name[i], name[i]);
    }
    return name;
}
