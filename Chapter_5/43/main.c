#include <stdio.h>
#include <stdlib.h>

char ch[26], i;
int j;

int main()
{
    printf("Hello world!\n");
    for (i='A',j=0; j<26; j++, i++) ch[j] = i;
    for (j=0; j<26; j++) printf("%c", ch[j]);



    return 0;
}
