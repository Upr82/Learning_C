#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int get_info(int m, int o)
{
    int result;

    if(m>1)
    {
        result=o;
        printf("Указан недопустимый режим. Используется режим %d (%s).\n",
               result, (result==0)?"метрический":"американский");
        return result;
    }

    if(m==0)
        result=0;

    else
        result=1;

    return result;
}

void show_info(int m)
{
    int range;
    float m_flow, flow;
    if(m==0)
    {
        printf("Введите пройденное расстояние в километрах: ");
        scanf("%d", &range);
        printf("Введите расход в литрах: ");
        scanf("%f", &flow);
        m_flow=100*flow/range;
        printf("Расход топлива составляет %.1f на 100 км.\n", m_flow);
    } else
    {
        printf("Введите пройденное расстояние в милях: ");
        scanf("%d", &range);
        printf("Введите расход в галлонах: ");
        scanf("%f", &flow);
        m_flow=range/flow;
        printf("Расход топлива составляет %.1f мили на галлон.\n", m_flow);
    }

}
