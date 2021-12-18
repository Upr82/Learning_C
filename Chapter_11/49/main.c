#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20

int main()
{
    system("chcp 1251");
    char arr1[SIZE];
    char arr2[SIZE];
    char *s_gets(char *str, int n);
    char *ent;
    char *string_in(char *str1, char *str2);

    puts("¬ведите первую строку.");
    s_gets(arr1, SIZE);
    puts("¬ведите вторую строку.");
    s_gets(arr2, SIZE);
    while(arr1[0]!='\0' && arr2[0]!='\0')
    {
        ent=string_in(arr1, arr2);
        if(ent)
            printf("¬тора€ строка входит в первую отсюда:\n%s\n", ent);
        else
            puts("¬тора€ строка не входит в первую.");
        puts("¬ведите первую строку.");
        s_gets(arr1, SIZE);
        puts("¬ведите вторую строку.");
        s_gets(arr2, SIZE);
    }

    printf("End!\n");
    return 0;
}

char *s_gets(char *str, int n)
{
    int i=0;
    char *result;
    result=fgets(str, n, stdin);
    if(result)
    {
        while(str[i]!='\0' && str[i]!='\n')
            i++;
        if(str[i]=='\n')
            str[i]='\0';
        else while(getchar()!='\n')
                continue;
    }

    return result;
}
char *string_in(char *str1, char *str2)
{
    char *result=str1;
    int ravno,i;
    while(*result!='\0')
    {
        if(*result==str2[0])
        {
            for(i=0,ravno=1;str2[i]!='\0' && *(result+i)!='\0';i++)
            {
                if(*(result+i)!=str2[i])
                ravno=0;
            }
            if(ravno) return result;
        }
        result++;
    }
    return NULL;
}














