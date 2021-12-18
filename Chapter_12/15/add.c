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
    else printf("������ ������������ �����. ������������ ����� %d (%s).\n",
               mode, (m==0)?"�����������":"������������");
}

void get_info(void)
{
    if(mode==0)
    {
        printf("������� ���������� ���������� � ����������: ");
        scanf("%d", &range);
        printf("������� ����� ���������������� ������� � ������: ");
        scanf("%f", &flow);
    }
    else
    {
        printf("������� ���������� ���������� � �����: ");
        scanf("%d", &range);
        printf("������� ����� ���������������� ������� � ��������: ");
        scanf("%f", &flow);
    }

}
void show_info(void)
{
    float m_flow;
    if(mode==0)
    {
        m_flow=100*flow/range;
        printf("������ ������� ���������� %.1f ������ �� 100 ����������.\n", m_flow);
    }
    else
    {
        m_flow=range/flow;
        printf("������ ������� ���������� %.1f ���� �� ������.\n", m_flow);
    }
}
