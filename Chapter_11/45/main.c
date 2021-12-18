#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 11

int main()
{
    void m_getw(char *str, int n);
    system("chcp 1251");
    char name[SIZE];
    int i;


    printf("Введите имя: ");
    m_getw(name, SIZE);
    puts("Вот что получилось:");
    for(i=0;i<SIZE;i++)
        printf("#%d = %c [%d]\n", i, name[i], name[i]);


    printf("End!\n");
    return 0;
}
void m_getw(char *str, int n)
{
    int i=0, j=0, flag=0;
    char ch;
    while(i<n && (ch=getchar())!='\n')
    {
        if(isalnum(ch))
        {
            str[j++]=ch;
            flag=1;
            i++;
        }

        if(isspace(ch) && flag==1)
            /*while (getchar()!='\n')
            continue;*/
            return;
    }

}
