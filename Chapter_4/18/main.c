#include <stdio.h>
#include <string.h>
#include <windows.h>


int main (void)

{
    char name [10];
    int lenght;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("¬ведите своЄ им€:");
    scanf("%s", name);
    lenght = strlen(name);
    lenght += 3;
    printf("\"%s\"\n", name);
    printf("\'%20s\'\n", name);
    printf("\'%-20s\'\n", name);
    printf("*%-*s*\n", lenght, name);






    return 0;
}
