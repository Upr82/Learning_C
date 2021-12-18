#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40

char name1[SIZE];
char name2[SIZE];
int lenght1;

FILE *in, *out;
int ch, count=0, choise;

int main()
{

    system("chcp 1251");

    int menu(void);
    int create_add(void);
    int edit_add(void);
    int copy_file(void);
    int read_file(void);
    void dir(void);
    void cls(void);

    choise=menu();
    while(choise>0)
    {
        switch (choise)
        {
            case 1:
                if(create_add()!=0)
                    break;
                break;
            case 2:
                if(edit_add()!=0)
                    break;
                break;
            case 3:
                if(copy_file()!=0)
                    break;
                break;
            case 4:
                if(read_file()!=0)
                    break;
                break;
            case 5:
                dir();
                break;
            case 6:
                cls();
                break;
        }
        choise=menu();
    }
    puts("Конец.");
    return 0;
}

int menu(void)
{
    int choise;
    printf("Работа с текстовыми файлами.\n");
    puts("1 - Создать файл и записать данные.");
    puts("2 - Добавить текст в файл.");
    puts("3 - Создать копию файла.");
    puts("4 - Просмотр файла.");
    puts("5 - Посмотреть каталог.");
    puts("6 - Очистить экран.");
    puts("0 - Выход.");
    scanf("%d", &choise);
    getchar();

    return choise;
}
int create_add(void)
{

    puts("Вы в функции \"Создать файл и записать данные.\"");
    printf("Укажите имя файла с расширением: ");
    if(scanf("%s", name1)!=1)
    {
        printf("Ошибка имени файла!\n");
        getchar();
        return -1;
    }
    getchar();
    lenght1=strlen(name1);
    name1[lenght1]='\0';
    if((in=fopen(name1,"w"))==NULL)
    {
        printf("Ошибка создания файла %s.\n", name1);
        return -2;
    }
    puts("Вводите текст (для завершения ввода ^Z).");
    while((ch=getc(stdin))!=EOF)
    {
        putc(ch,in);
        putchar(ch);
    }
    if(fclose(in)!=0)
    {
        printf("Ошибка закрытия файла %s.\n", name1);
        return -3;
    }
    return 0;
}
int edit_add(void)
{
    puts("Вы в функции \"Добавить текст в файл.\"");
    puts("Укажите имя файла с расширением.");
    if(scanf("%s", name1)!=1)
    {
        printf("Ошибка имени файла!\n");
        getchar();
        return -1;
    }
    getchar();
    lenght1=strlen(name1);
    name1[lenght1]='\0';
    if((in=fopen(name1,"a+"))==NULL)
    {
        printf("Ошибка создания файла %s.\n", name1);
        return -2;
    }
    puts("Вот текст из файла. Вводите свой текст (для завершения ввода ^Z).");
    while((ch=getc(in))!=EOF)
        putc(ch,stdout);
    while((ch=getc(stdin))!=EOF)
    {
        putc(ch,in);
    }
    if(fclose(in)!=0)
    {
        printf("Ошибка закрытия файла %s.\n", name1);
        return -3;
    }
    return 0;
}
int copy_file(void)
{
    puts("Вы в функции \"Создать копию файла.\"");
    puts("Укажите имя исходного файла с расширением.");
    if(scanf("%s", name1)!=1)
    {
        fprintf(stderr,"Ошибка имени исходного файла.\n");
        getchar();
        return -1;
    }
    getchar();
    lenght1=strlen(name1);
    name1[lenght1]='\0';
    strncpy(name2,name1,lenght1-3);
    strcat(name2,"bak");
    name2[lenght1]='\0';
    if((in=fopen(name1,"r"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия исходного файла.\n");
        return -2;
    }

    if((out=fopen(name2,"w"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия конечного файла.\n");
        return -4;
    }
    while((ch=getc(in))!=EOF)
    {
        putc(ch,out);
    }
    if(fclose(in)!=0 || fclose(out)!=0)
    {
        fprintf(stderr,"Ошибка закрытия одного или нескольких файлов.\n");
        return -3;
    }
    printf("Копирование данных из %s в %s выполнено.\n", name1, name2);
    return 0;
}
int read_file(void)
{
    puts("Вы в функции \"Просмотр файла.\"");
    puts("Укажите имя файла с расширением.");
    if(scanf("%s", name1)!=1)
    {
        fprintf(stderr,"Ошибка имени файла!\n");
        getchar();
        return -1;
    }
    getchar();
    lenght1=strlen(name1);
    name1[lenght1]='\0';
    if((in=fopen(name1,"r"))==NULL)
    {
        fprintf(stderr,"Ошибка открытия файла %s.\n", name1);
        return -2;
    }
    puts("Вот текст из файла.");
    while((ch=getc(in))!=EOF)
        putc(ch,stdout);
    if(fclose(in)!=0)
    {
        fprintf(stderr,"Ошибка закрытия файла %s.\n", name1);
        return -3;
    }
    return 0;
}
void dir(void)
{
    system("dir");
}
void cls(void)
{
    system("cls");
}
