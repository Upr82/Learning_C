#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20

int main()
{
    char *f_char(const char *str, char ch);
    system("chcp 1251");
    char name[SIZE];
    char zapros;

    puts("¬ведите слово и искомый символ:");
    while(scanf("%s %c", name, &zapros)==2 && zapros!='0')
    {
        printf("»скомый символ %c имеет первое вхождение по адресу %p\n",
               zapros, f_char(name, zapros));
        puts("¬ведите слово и искомый символ:");
    }





    printf("Hello world!\n");
    return 0;
}
char *f_char(const char *str, char ch)
{
     char  * ptr = str;
    int i=0;
    while(*(ptr+i)!='\0' && *(ptr+i)!=ch)
        i++;
    if(*(ptr+i)=='\0')
        return 0;
    else return ptr+i;
}
