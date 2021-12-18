#include <stdio.h>
#include <windows.h>

char color1 [10] = "RED";
char color2 [10] = "BLUE";
char color3 [10] = "ORANGE";
char color4 [10] = "BLACK";




int main (void)
{
    SetConsoleOutputCP(1251);


    printf("Вы прекрасно выглядите в %s.\n", color1);


    printf("Вы прекрасно выглядите в %s.\n", color2);


    printf("Вы прекрасно выглядите в %s.\n", color3);


    printf("Вы прекрасно выглядите в %s.\n", color4);



    return 0;
}
