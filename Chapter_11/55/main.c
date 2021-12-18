#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define STR 5
#define LENGHT 20

int main()
{
    char names[STR][LENGHT]={"Anton","Bora","Cry","Du","E"};
    char *source[STR];
    int i;
    void prn(char *arr[], int n);


    for(i=0;i<STR;i++)
    {
        source[i]=names[i];
    }

    for(i=0;i<STR;i++)
        puts(source[i]);

    prn(source, STR);



    printf("END!\n");
    return 0;
}
void prn(char *arr[], int n)
{
    int i,j;
    char *prom;
    puts("In function prn.");
    for(i=0;i<n;i++)
        puts(arr[i]);

    for(i=0;i<(STR-1);i++)
    {
        for(j=i+1;j<STR;j++)
        {
            if(strlen(arr[i])>strlen(arr[j]))
            {
                prom=arr[i];
                arr[i]=arr[j];
                arr[j]=prom;
            }
        }
    }

    puts("After sort.");
    for(i=0;i<n;i++)
        puts(arr[i]);
}
