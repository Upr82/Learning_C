#include <stdio.h>
#include <windows.h>

const float MIL_PER_KM = 0.62137;
const int SEC_PER_M = 60;
const int SEC_PER_H = 3600;

float dist_km;//пробег в километрах
int min_km, sec_km;// минут и секунд
int sec;//секунд всего
float dist_mil;//дистанци€ в мил€х
float sec_per_1mil;//секунд дл€ пробега одной мили
float mil_per_1h;//средн€€ скорость миль в час


int main()
{
    SetConsoleOutputCP(1251);
    printf("ѕрограмма переводит врем€ пробега дистанции в метрической\n");
    printf("системе во врем€ пробега одной мили и вычисл€ет ¬ашу среднюю\n");
    printf("скорость в мил€х в час.\n\n");
    printf("¬ведите дистанцию в километрах:");
    scanf("%f", &dist_km);
    printf("¬ведите количество минут и секунд дл€ преодолени€ дистанции.\n");
    printf("—начала минуты:");
    scanf("%d", &min_km);
    printf("“еперь секунды:");
    scanf("%d", &sec_km);
    dist_mil = dist_km * MIL_PER_KM;
    sec = (min_km * SEC_PER_M) + sec_km;
    sec_per_1mil = (float)sec / dist_mil;//секунд на 1 милю
    mil_per_1h = (dist_mil*(float)SEC_PER_H)/(float)sec;
    printf("¬ы пробежали %.2f км (%.2f мили) за %d минут и %d секунд.\n", dist_km, dist_mil, min_km, sec_km);
    printf("“ака€ скорость соответствует пробегу одной мили за %d минут %d секунд.\n", (int)sec_per_1mil/SEC_PER_M, (int)sec_per_1mil%SEC_PER_M);
    printf("¬аша средн€€ скорость соответствует %.2f миль в час.\n", mil_per_1h);


    return 0;
}
