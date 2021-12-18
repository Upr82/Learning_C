#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    system("chcp 1251");
    //system("cls");

    int i, read;
    if (argc<2 || ((read=atoi(argv[1]))<1))
        printf("Аргумент должен быть больше 0\n");
    else for(i=0;i<read;i++)
    puts("Хорошо!");



    return 0;
}
