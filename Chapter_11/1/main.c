#include <stdio.h>
#define MSG "I am symbol string"
#define LENGHT 50

int main(void)
{
    char words[LENGHT]="I am string, in array";
    const char *ptr = "What point to me?";
    puts(MSG);
    puts(words);
    puts(ptr);
    words[5]='c';
    puts(words);




    return 0;
}
