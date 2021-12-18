#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 20

int main()
{
    system("chcp 1251");
    char arr1[SIZE];
    char arr2[SIZE];
    int col_symb, i;
    char *s_gets(char *str, int n);
    char *mystrncpy(char *str1, char *str2, int n);

    /*puts("Введите первую строку.");
    s_gets(arr1, SIZE);*/
    puts("Введите исходную строку.");
    s_gets(arr2, SIZE);
    printf("Сколько символов скопировать в целевую строку (не более %d)?", SIZE-1);

    while((scanf("%d", &col_symb))!=1 || col_symb<=0 || col_symb>(SIZE-1))
    {
        puts("Не правильно, попробуйте снова.");
        while(getchar()!='\n')
            continue;
    }

    printf("Вот результат:\n%s\n\n", mystrncpy(arr1,arr2,col_symb));

    for(i=0;i<SIZE;i++)
        printf("[%d] = %c (%d)\n", i, arr1[i], arr1[i]);


    printf("End!\n");
    return 0;
}
char *s_gets(char *str, int n)
{
    char *result;
    int i=0;
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
char *mystrncpy(char *str1, char *str2, int n)
{
    int i;
    for(i=0;i<n;i++)
        str1[i]=str2[i];

    return str1;
}

