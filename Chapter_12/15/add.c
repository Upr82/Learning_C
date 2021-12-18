#include <stdio.h>
#include <stdlib.h>
#include "add.h"

static int mode=0;
static int range;
static float flow;

void set_mode(int m)
{
    if (m==0)
        mode=0;
    else if (m==1)
        mode=1;
    else printf("Указан недопустимый режим. Используется режим %d (%s).\n",
               mode, (m==0)?"метрический":"американский");
}

void get_info(void)
{
    if(mode==0)
    {
        printf("Введите пройденное расстояние в километрах: ");
        scanf("%d", &range);
        printf("Введите объём израсходованного топлива в литрах: ");
        scanf("%f", &flow);
    }
    else
    {
        printf("Введите пройденное расстояние в милях: ");
        scanf("%d", &range);
        printf("Введите объём израсходованного топлива в галлонах: ");
        scanf("%f", &flow);
    }

}
void show_info(void)
{
    float m_flow;
    if(mode==0)
    {
        m_flow=100*flow/range;
        printf("Расход топлива составляет %.1f литров на 100 километров.\n", m_flow);
    }
    else
    {
        m_flow=range/flow;
        printf("Расход топлива составляет %.1f мили на галлон.\n", m_flow);
    }
}
