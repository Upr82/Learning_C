#include <stdio.h>
#include <windows.h>
#include <string.h>


int main (void)
{
    char name [40];
    char surname [40];
    int lenght_name, lenght_surname;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("¬ведите ¬аши им€ и фамилию:");
    scanf("%s%s", name, surname);
    lenght_name = strlen (name);
    lenght_surname = strlen (surname);
    printf("%s %s\n", name, surname);
    printf("%-*d %-*d", lenght_name, lenght_name, lenght_surname, lenght_surname);


    return 0;
}
