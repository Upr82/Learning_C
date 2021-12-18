#include <stdio.h>
#include <windows.h>

int a=1, pre_a, b=1, b_post;

int main (void)
{
    SetConsoleOutputCP(1251);
    while (a<=5)
    {
        pre_a = ++a;
        b_post = b++;
        printf("a = %d, pre_a = %d, b = %d, b_post = %d.\n", a, pre_a, b, b_post);

    }




    return 0;
}
