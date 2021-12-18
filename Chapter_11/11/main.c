#include <stdio.h>
#include <windows.h>
#define SIZE 10
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char words[SIZE];
    int i;
    puts("¬ведите строки или пустую строку дл€ выхода.");
    while(fgets(words, SIZE, stdin)!=NULL && words[0]!='\n')
    {
        i=0;
        while(words[i]!='\0' && words[i]!='\n')
        {
            i++;
        }
        if(words[i]=='\n')
            words[i]='\0';
        else while(getchar()!='\n')
            continue;
       puts(words);
    }

    return 0;
}
