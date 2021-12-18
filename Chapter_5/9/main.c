#include <stdio.h>
#include <windows.h>

char ch;
int i;
float fl;

int main()
{
    SetConsoleOutputCP(1251);
    fl=i=ch='C';
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch=ch+1;
    i = fl + 2 * ch;
    fl = 2.0 * ch + i;
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch=1107;
    printf("Теперь ch = %c\n", ch);
    ch = 80.89;
    printf("Теперь ch = %c\n", ch);




    return 0;
}
