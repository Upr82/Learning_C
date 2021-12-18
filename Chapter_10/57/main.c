#include<stdio.h>
#define SIZE 4
int main(void)
{
    int source1[SIZE]={1,2,3,4};
    int source2[]={11,12,13,14};
    int target[SIZE];
    void add_ar(int s1[],int s2[], int t[], int n);
    void show_ar(int ar[], int n);
    show_ar(source1, SIZE);
    show_ar(source2, SIZE);
    show_ar(target, SIZE);
    add_ar(source1, source2, target, SIZE);
    show_ar(target, SIZE);

    return 0;
}
void show_ar(int ar[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%12d", *(ar+i));
    putchar('\n');
}
void add_ar(int s1[], int s2[], int t[], int n)
{
    int i;
    for(i=0;i<n;i++)
        *(t+i)=*(s1+i)+*(s2+i);
}
