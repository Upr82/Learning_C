#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pa;
    int size;
    int value;
    int *make_array(int n, int v);
    void show_array(const int ar[],int n);
    system("chcp 1251");

    printf("������� ���������� ��������� ������� (-1 ��� ������): ");
    while(scanf("%d", &size)==1 && size>0)
    {
        printf("������� ��������, ������� ������������������� ������: ");
        while(scanf("%d", &value)!=1 || value<1)
        {
            puts("�����������!");
        }
        pa=make_array(size, value);
        show_array(pa,size);

        free(pa);
        printf("\n������� ���������� ��������� ������� (-1 ��� ������): ");
    }

    printf("\nEnd!\n");
    return 0;
}
int *make_array(int n, int v)
{
    int *res,i;
    res=(int *)malloc(n*sizeof(int));
    if (res==NULL) exit(EXIT_FAILURE);

    for(i=0;i<n;i++)
        res[i]=v;

    return res;
}
void show_array(const int ar[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%4d", ar[i]);
        if(i%8==7)
            putchar('\n');
    }
}
