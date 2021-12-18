#include <stdio.h>
#include <ctype.h>
#include <windows.h>

char ch;

int main (void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Введите мне строчную букву и я выведу животное (для выхода #): ");
    while ((ch=getchar())!='#')
    {
        if (ch=='\n') continue;
        if (islower(ch))
            switch (ch)
        {
            case 'f':
                {
                    printf("Антилопа.\n");
                    printf("Антилопа.\n");
                }
                break;
            case ',':
                {
                    printf("Баран.\n");
                    printf("Баран.\n");
                }
                break;
            case 'd':
                {
                    printf("Варан.\n");
                    printf("Варан.\n");
                }

                break;
            case 'u':
                {
                    printf("Гомо сапиенс.\n");
                    printf("Гомо сапиенс.\n");
                }

                break;
            default:
                {
                    printf("Я не знаю животных на эту букву. Давай заново.\n");
                    printf("Я не знаю животных на эту букву. Давай заново.\n");
                }

        }
        else printf("Нужна строчная буква.\n");
        while (getchar()!='\n')
            continue;
        printf("Введите мне строчную букву и я выведу животное (для выхода #): ");
    }

    return 0;
}
