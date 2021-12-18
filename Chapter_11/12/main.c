#include <stdio.h>
#include <windows.h>
#define SIZE 10
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char *words(char *start, int n);
    char array[SIZE];
    char *i;
    do
    {
        puts("Введите строку:");
        printf(" Возврат функции: %p\n", i=words(array, SIZE));
    } while (i!=NULL && *(i)!='\n');




    return 0;
}
char *words(char *start, int n)
{
    int i=0;
    char *answer;

    answer=fgets(start, n, stdin);

    if(*answer && *start!='\n')
    {
        while(start[i]!='\0' && start[i]!='\n')
        {
            i++;
        }
            if (start[i]=='\n')
                start[i]='\0';
            else
                while (getchar()!='\n')
                    continue;
        fputs(start, stdout);
    }
    return answer;
}
