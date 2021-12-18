#include <stdio.h>
#include <stdlib.h>

float cur, press_20, pressure;
const float LIMIT1=4.0, LIMIT2=8.0, LIMIT3=12.0, LIMIT4=20.0;

int main()
{
    printf("Enter current (for 4-20 mA) and pressure for 20mA: ");
    while(scanf("%f%f", &cur, &press_20)==2)
    {
        if (cur<LIMIT1) printf("AI in status \"OBRIV\";\n");
        else if (cur<LIMIT2)
        {
            pressure = (cur-4.0)*press_20/16.0;
            printf("AI in status \"ALARM_MIN\", pressure = %g\n", pressure);
        }
        else if (cur<=LIMIT3)
        {
            pressure = (cur-4.0)*press_20/16.0;
            printf("AI in status \"NORMA\", pressure = %g\n", pressure);
        }
        else if (cur<=LIMIT4)
        {
            pressure = (cur-4.0)*press_20/16.0;
            printf("AI in status \"ALARM_MAX\", pressure = %g\n", pressure);
        }
        else printf("AI in status \"KZ\";\n");
        printf("Enter current (for 4-20 mA) and pressure for 20mA: ");
    }


    return 0;
}
