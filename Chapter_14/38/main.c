#include <stdio.h>
#include <stdlib.h>

enum {red, yellow, green, blue, violet}color;

int main()
{
    //enum COLORS ;

    for(color=red;color<=violet;color++)
        printf("Color = %d\n", color);
    printf("Hello world!\n");
    return 0;
}
