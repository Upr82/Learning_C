#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    printf("A & A = %d\n", strcmp("A","A"));
    printf("A & a = %d\n", strcmp("A","a"));
    printf("a & A = %d\n", strcmp("a","A"));
    printf("ABC & AB = %d\n", strcmp("ABC","AB"));
    printf("AB & ABC = %d\n", strcmp("AB","ABC"));
    printf("B & A = %d\n", strcmp("B","A"));
    return 0;
}
