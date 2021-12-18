#include "main.h"

dht_data sensor_data;

int main()
{
    printf("Hello world!\n");
    lcd_print(get_data(&sensor_data));
    return 0;
}
