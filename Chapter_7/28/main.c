#include <stdio.h>
#include <windows.h>
#include <string.h>

char ch[20];
int i, lenght;

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("¬ведите текст:\n");
    scanf("%s", ch);
    lenght = strlen(ch);
    for (i=(lenght-1); i>=0; i--)
    {
        if (isupper(ch[i])) printf ("%c", tolower(ch[i]));
            else printf ("%c", toupper(ch[i]));
    }
    printf("\n");
    for(i=0;i<lenght;i++)
        {
        if (isupper(ch[i])) printf ("%c", tolower(ch[i]));
            else printf ("%c", toupper(ch[i]));
    }








    return 0;
}
