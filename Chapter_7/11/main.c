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
    printf("Введите результат первой игры в %(q для выхода): ");
    while (scanf("%f", &score)==1)
    {
        if (score<MIN || score>MAX)
        {
            printf("Введите значение от %.1f до %.1f %%", MIN, MAX);
            continue;
        }
        cur_min = (score<cur_min) ? score : cur_min;
        cur_max = (score>cur_max) ? score : cur_max;
        n++;
        total += score;
        printf("Введите результат следующих игр в % (q для выхода): ");

    }
    if (n) printf("В %d проведенных играх набрано %g очков, min результат = %g, max результат = %g очков.\n",
               n, total, cur_min, cur_max);
    else printf("Не введено ни одного корректного значения.\n");

    return 0;
}
