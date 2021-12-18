#include <stdio.h>
#include <string.h>

#define NAME "Gigathink. CO"
#define ADRESS "101 Megabuck plaza"
#define PLACE "Megapolis CA 94904"
#define WIDHT 40

int i, lenght;

void show_n_char(char c, int col);

int main(void)
{
    show_n_char('*',WIDHT);
    printf("\n");

    show_n_char(' ', (WIDHT-strlen(NAME))/2);
    printf("%s\n", NAME);

    show_n_char(' ', (WIDHT-strlen(ADRESS))/2);
    printf("%s\n", ADRESS);

    show_n_char(' ', (WIDHT-strlen(PLACE))/2);
    printf("%s\n", PLACE);

    show_n_char('*',WIDHT);
    printf("\n");

    return 0;
}

void show_n_char(char c, int col)
{
    int j;
    for (j=1;j<=col;j++)
        printf("%c", c);
}
