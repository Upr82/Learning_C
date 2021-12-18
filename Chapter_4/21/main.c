#include <stdio.h>
#include <windows.h>

float v_m_bit, size_m_byte, t;

int main (void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("¬ведите размер файла в мегабайтах и скорость ");
    printf("загрузки в мегабитах в секунду:");
    scanf("%f%f", &size_m_byte, &v_m_bit);
    t = (size_m_byte*8)/v_m_bit;
    printf("ѕри скорости загрузки %.2f мегабит в секунду файл размером %.2f мегабайт\n", v_m_bit, size_m_byte);
    printf("загружаетс€ за %.2f секунд.", t);



    return 0;
}
