#include <stdio.h>
#define SIZE 20
int main(void)
{
    char word[SIZE];
    puts("Enter string:");
    fgets(word, 20, stdin);
    puts("What in new string?");
    fputs(word, stdout);
    putchar('\n');
    printf("%s\n", word);
    int i;
    for(i=0;i<SIZE;i++)
        printf("#%d = %c = %d\n", i, word[i], word[i]);
    return 0;
}
