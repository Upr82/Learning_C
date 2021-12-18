#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *target;
    int num;
    size_t byte;


    system("chcp 1251");
    target=fopen("1.txt","a+");

    puts("¬ведите целые числа инт:");
    while((byte=fread(&num,sizeof(int),1,stdin)) && num!=0)
        fwrite(&num,sizeof(int),1,target);

    fclose(target);
    printf("\nHello world!\n");
    return 0;
}
