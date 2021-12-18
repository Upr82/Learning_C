#include "main.h"


int main()
{
    float x;
    do
    {
        x=get_temp();
        lcd_print(x);
    } while(x);

    printf("Hell world!\n");
    return 0;
}
