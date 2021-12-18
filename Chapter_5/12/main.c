#include <stdio.h>
#include <windows.h>

const float MIL_PER_KM = 0.62137;
const int SEC_PER_M = 60;
const int SEC_PER_H = 3600;

float dist_km;//������ � ����������
int min_km, sec_km;// ����� � ������
int sec;//������ �����
float dist_mil;//��������� � �����
float sec_per_1mil;//������ ��� ������� ����� ����
float mil_per_1h;//������� �������� ���� � ���


int main()
{
    SetConsoleOutputCP(1251);
    printf("��������� ��������� ����� ������� ��������� � �����������\n");
    printf("������� �� ����� ������� ����� ���� � ��������� ���� �������\n");
    printf("�������� � ����� � ���.\n\n");
    printf("������� ��������� � ����������:");
    scanf("%f", &dist_km);
    printf("������� ���������� ����� � ������ ��� ����������� ���������.\n");
    printf("������� ������:");
    scanf("%d", &min_km);
    printf("������ �������:");
    scanf("%d", &sec_km);
    dist_mil = dist_km * MIL_PER_KM;
    sec = (min_km * SEC_PER_M) + sec_km;
    sec_per_1mil = (float)sec / dist_mil;//������ �� 1 ����
    mil_per_1h = (dist_mil*(float)SEC_PER_H)/(float)sec;
    printf("�� ��������� %.2f �� (%.2f ����) �� %d ����� � %d ������.\n", dist_km, dist_mil, min_km, sec_km);
    printf("����� �������� ������������� ������� ����� ���� �� %d ����� %d ������.\n", (int)sec_per_1mil/SEC_PER_M, (int)sec_per_1mil%SEC_PER_M);
    printf("���� ������� �������� ������������� %.2f ���� � ���.\n", mil_per_1h);


    return 0;
}
