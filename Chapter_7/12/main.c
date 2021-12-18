#include <stdio.h>
#include <windows.h>


const float MIN = 0.0f;
const float MAX = 100.0f;
float cur_min = MAX, cur_max = MIN;
float score, total=0.0f;
int n=0;


int main (void)
{
    SetConsoleOutputCP(1251);
    printf("������� ��������� ������ ���� � %% (q ��� ������): ");
    while (scanf("%f", &score)==1)
    {
        if (score>=MIN && score<=MAX)
        {
            cur_min = (score<cur_min) ? score : cur_min;
            cur_max = (score>cur_max) ? score : cur_max;
            n++;
            total += score;
            printf("������� ��������� ��������� ��� � %% (q ��� ������): ");
        }   else printf("������� �������� �� %.1f �� %.1f %%: ", MIN, MAX);

    }
    if (n)
    {
        printf("� %d ����������� ����� ������� %g �����, ������� ��������� = %.1f �����.\n", n, total, total/n);
        printf("min ��������� = %.1f, max ��������� = %.1f �����.\n", cur_min, cur_max);
    }
    else printf("�� ������� �� ������ ����������� ��������.\n");

    return 0;
}
