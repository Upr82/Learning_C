#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    system("chcp 1251");
    char word[SIZE];
    puts("¬ведите ¬аши строки, или пустую строку дл€ завершени€: ");
    while((fgets(word,SIZE,stdin)!=NULL) &&(word[0]!='\n'))
    {
        fputs(word,stdout);
        while(getchar()!='\n')
            continue;
    }

    printf("End!\n");
    return 0;
}
