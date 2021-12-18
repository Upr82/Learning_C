#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int get_info(int m, int o)
{
    int result;

    if(m>1)
    {
        result=o;
        printf("������ ������������ �����. ������������ ����� %d (%s).\n",
               result, (result==0)?"�����������":"������������");
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
        printf("������� ���������� ���������� � ����������: ");
        scanf("%d", &range);
        printf("������� ������ � ������: ");
        scanf("%f", &flow);
        m_flow=100*flow/range;
        printf("������ ������� ���������� %.1f �� 100 ��.\n", m_flow);
    } else
    {
        printf("������� ���������� ���������� � �����: ");
        scanf("%d", &range);
        printf("������� ������ � ��������: ");
        scanf("%f", &flow);
        m_flow=range/flow;
        printf("������ ������� ���������� %.1f ���� �� ������.\n", m_flow);
    }

}
