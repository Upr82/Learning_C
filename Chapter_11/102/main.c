#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    system("chcp 1251");
    char name[SIZE];
    int i;
    puts("������� ���� ������.");
    //scanf("%s", name);
    gets(name);
    putchar('\n');
    puts("��� ���� ������: ");
    puts(name);
    for(i=0;i<SIZE;i++)
        printf("[%d] = '%c', %d\n", i, name[i], name[i]);
    printf("%s\n", name);
    printf("End!\n");

    return 0;
}
