#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define STR 20
#define COL 30
#define NAME 20

char trans(int n);
void test(FILE *f, int *s, int *c);

void filt(int x, int y, int arr[x][y]);

int main()
{
    FILE *in, *out;

    char source_name[NAME];
    char target_name[NAME];
    int str,col,num;
    int f_str=0,f_col=0;

    system("chcp 1251");

    fprintf(stderr,"Введите имя исходного файла: ");
    while(fscanf(stdin,"%20s", source_name)!=1)
    {
        fprintf(stderr,"Введите имя исходного файла: ");
    }

    while((in=fopen(source_name,"r"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия файла %s.\n", source_name);
        fprintf(stderr,"Введите имя исходного файла: ");
        while(fscanf(stdin,"%20s", source_name)!=1)
        {
            fprintf(stderr,"Ошибка! Введите имя исходного файла: ");
        }
    }

    fprintf(stderr,"Введите имя целевого файла (должно отличаться от исходного): ");
    while((fscanf(stdin,"%20s", target_name)!=1) || (strcmp(source_name,target_name)==0))
    {
        fprintf(stderr,"Ошибка! Введите имя целевого файла(должно отличаться от исходного): ");
    }

    while((out=fopen(target_name,"w"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия файла %s.\n", target_name);
        fprintf(stderr,"Введите имя целевого файла (должно отличаться от исходного): ");
        while((fscanf(stdin,"%20s", target_name)!=1) || (strcmp(source_name,target_name)==0))
        {
            fprintf(stderr,"Ошибка! Введите имя целевого файла (должно отличаться от исходного): ");
        }
    }
    test(in, &f_str, &f_col);
    fprintf(stdout,"В исходном файле %s содержится %d строк и %d колонн.\n",
            source_name, f_str, f_col);
    rewind(in);

    int int_arr[f_str][f_col];

    for(str=0;str<f_str;str++)//считываем из текстового файл и записываем в цифровой массив
    {
        for(col=0;col<f_col;col++)
        {
            fscanf(in,"%d",&num);
            int_arr[str][col]=num;
        }
    }

    filt(f_str,f_col,int_arr);//

    for(str=0;str<f_str;str++)// переводим из цифрового массива в текстовй и на экран
    {
        for(col=0;col<f_col;col++)
            {
                fprintf(out,"%c", trans(int_arr[str][col]));
                fprintf(stdout,"%c", trans(int_arr[str][col]));
            }

        putc('\n',out);
        putc('\n',stdout);
    }



    if(fclose(in))
    {
        fprintf(stderr,"Ошибка закрытия исходного файла %s.\n", source_name);
        exit(EXIT_FAILURE);
    }

    if(fclose(out))
    {
        fprintf(stderr,"Ошибка закрытия целевого файла %s.\n", target_name);
        exit(EXIT_FAILURE);
    }

    printf("Hello world!\n");
    return 0;
}
char trans(int n)
{
    char symb;
    switch (n)
    {
        case 0:
            symb=' ';
            break;
        case 1:
            symb='.';
            break;
        case 2:
            symb='\'';
            break;
        case 3:
            symb=':';
            break;
        case 4:
            symb='`';
            break;
        case 5:
            symb='-';
            break;
        case 6:
            symb='=';
            break;
        case 7:
            symb='$';
            break;
        case 8:
            symb='%';
            break;
        case 9:
            symb='#';
            break;
    }
    return symb;
}
void test(FILE *f, int *s, int *c)
{
    _Bool first_n_str=false;
    int ch=0,count=0,num;

    while(fscanf(f,"%d",&num)==1)
        count++;

    rewind(f);
    while((ch=getc(f))!=EOF)
    {
        if(first_n_str==false)
        {
            if(ch=='\n')
            {
                *c=((int)ftell(f))/2;
                first_n_str=true;
            }
        }
    }
    *s=count/ *c;
    fprintf(stdout,"Всего %d символов.\n", count);
}

void filt(int x, int y, int arr[x][y])
{
    int i,j;
    int a,b,c,d,e;
    float medium;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            e=4;
            if(i==0)
            {
                a=0;
                e--;
            } else
            {
                a=arr[i-1][j];
            }

            if(i==(x-1))
            {
                c=0;
                e--;
            } else
            {
                c=arr[i+1][j];
            }

            if(j==0)
            {
                d=0;
                e--;
            } else
            {
                d=arr[i][j-1];
            }

            if(j==(y-1))
            {
                b=0;
                e--;
            } else
            {
                b=arr[i][j+1];
            }

            medium=(float)(a+b+c+d)/e;
            if((medium-arr[i][j])<1 || (medium-arr[i][j]>1))
                arr[i][j]=(int)medium;
        }

    }
}
