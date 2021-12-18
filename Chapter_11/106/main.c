#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int main()
{
    system("chcp 1251");
    char name1[SIZE], name2[SIZE];
    int i;

    puts("Введите имя и фамилию, до 7 символов на каждое слово.");
    scanf("%s %s", name1,name2);
    printf("Имя = %s, фамилия = %s\n", name1,name2);

    for(i=0;i<SIZE;i++)
        printf("[%d] = '%c' - %d\n", i,name1[i], name1[i]);
    for(i=0;i<SIZE;i++)
        printf("[%d] = '%c' - %d\n", i,name2[i], name2[i]);
        printf("Имя = %s, фамилия = %s\n", name1,name2);
    printf("Hello world!\n");
    return 0;
}
