#include "lcd_driver.h"

void lcd_print(dht_data *pdata)
{
    printf("Temperature = %g degC;\n", pdata->temperature);
    printf("Humidity = %g %%.", pdata->humidity);
}
