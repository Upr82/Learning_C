#include <stdio.h>
#include <stdlib.h>
#define N 2
#define LEN 20

struct orders
{
    char bank[LEN];
    float fbank;
    char save[LEN];
    float fsave;
};

float sum(const struct orders *temp, int n);

int main()
{
    system("chcp 1251");
    float f;

    struct orders shpak[N]={
    {
        "���������",1.11,
        "�������������", 2.22
    },
    {
        "��������� 2", 3.33,
        "������������� 2", 4.44
    }
    };
    f=sum(shpak, N);
    printf("����� �� ������ = %g\n", f);


    printf("Hello world!\n");
    return 0;
}
float sum(const struct orders *temp, int n)
{
    float sum=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        printf("�� ����� %s ��������� %g ������\n",
               (temp+i)->bank, (temp+i)->fbank);
        printf("�� ����� %s ��������� %g ������\n",
               (temp+i)->save, (temp+i)->fsave);
        sum+=(temp+i)->fbank + (temp+i)->fsave;
    }
    return sum;
}
