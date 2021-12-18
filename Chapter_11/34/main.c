#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 21

int main()
{
    system("chcp 1251");
    system("cls");
    void ToUpper(char * str);
    int punct(const char * str);
    char *adr;
    int i;

    char line[SIZE];

    puts("Введите строку до 21 символов.");

    fgets(line, SIZE, stdin);

    for(i=0;i<SIZE;i++)
        printf("[%d] = %c\n", i, line[i]);

    adr=strchr(line, '\n');
    ToUpper(line);
    if(adr)
        *adr='\0';
    puts(line);
    for(i=0;i<SIZE;i++)
        printf("[%d] = %c\n", i, line[i]);
    printf("В этой строке %d знаков препинания.\n", punct(line));





    return 0;
}
void ToUpper(char * str)
{
    while(*str)
    {
        //if(islower(*str))
            *str=toupper(*str);
        str++;
    }
}
int punct(const char * str)
{
    int count=0;
    while(*str)
        if(ispunct(*str++))
        count++;

    return count;
}
