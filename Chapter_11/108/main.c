#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define SIZE 17

int main()
{
    char answer[SIZE]="my_file.txt";
    char bug[]=".bak";
    system("chcp 1251");

    int i, available, lenght;

    puts("Вот массив №1: ");
    for(i=0;i<SIZE;i++)
        printf("[%d] = '%c' - %d\n", i, answer[i], answer[i]);
    puts("Вот массив №2: ");
    for(i=0;i<(sizeof(bug)/sizeof(char));i++)
        printf("[%d] = '%c' - %d\n", i, bug[i], bug[i]);
    strncat(answer,bug,(SIZE-strlen(answer)-1));

    puts("Вот массив №1: ");
    for(i=0;i<SIZE;i++)
        printf("[%d] = '%c' - %d\n", i, answer[i], answer[i]);
    puts(answer);

    lenght=strlen(answer);
    strcpy(strchr(answer,'.'),bug);
    puts("Вот массив №1: ");
    for(i=0;i<SIZE;i++)
        printf("[%d] = '%c' - %d\n", i, answer[i], answer[i]);
    puts(answer);

    printf("End!\n");
    return 0;
}
