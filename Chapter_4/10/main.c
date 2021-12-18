#include <stdio.h>
#include <windows.h>
#include <string.h>

int letter;
char name[8];

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Здравствуйте, как Вас зовут?\n");
    scanf("%s", name);
    printf("%s, в Вашем имени %d букв,\n", name, strlen(name));
    printf("к тому же у нас для него %d байт.", sizeof(name));
    getchar();
    getchar();





    return 0;
}
