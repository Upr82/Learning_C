#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 81
#define MSG "12345"

void fit(char *, int);
int main()
{
    system("chcp 1251");
    printf("%s - здесь %d символов.\n", MSG, (int)strlen(MSG));
    char line[SIZE];
    //int lenght;
    while(fgets(line,SIZE,stdin))
        {
            fputs(line,stdout);
            printf("В строке %d символов.\n", (int)strlen(line));
            fit(line,5);
            fputs(line,stdout);
            printf("В строке %d символов.\n", (int)strlen(line));
            putchar('\n');
            fputs(line+6,stdout);
            printf("В строке %d символов.\n", (int)strlen(line+6));

        }
    printf("Hello world!\n");
    return 0;
}
void fit(char *str, int n)
{
    if(strlen(str)>n)
        *(str+n)='\0';
}
