#include "sensor_driver.h"

float get_temp(void)
{
    float temp=0.0;
    printf("Input temperature (temp >=0): ");
    while(scanf("%f", &temp)!=1 || temp<0.0)
    {
        while(getchar()!='\n')
            continue;
            #if DBG == 1
                printf("Error data.\n");
            #endif
    }
        while(getchar()!='\n')
            continue;

    return temp;
}
