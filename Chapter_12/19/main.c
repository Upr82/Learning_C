#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    srand((unsigned int)time(0));
    system("chcp 1251");
    int choice, i, num;
    int arr[SIZE]={0};

    printf("Для генерации 1000 случайных чисел введите 1: ");
    scanf("%d", &choice);
    while(choice==1)
    {
        for(i=0;i<1000;i++)
        {
            num=rand()%10+1;
            switch(num)
            {
            case 1:
                arr[0]++;
                break;
            case 2:
                arr[1]++;
                break;
            case 3:
                arr[2]++;
                break;
            case 4:
                arr[3]++;
                break;
            case 5:
                arr[4]++;
                break;
            case 6:
                arr[5]++;
                break;
            case 7:
                arr[6]++;
                break;
            case 8:
                arr[7]++;
                break;
            case 9:
                arr[8]++;
                break;
            case 10:
                arr[9]++;
                break;
            }
        }
        puts("Вот что получилось:");
        for(i=0;i<SIZE;i++)
        {
            printf("Число %d выпало %d раз(а)\n", i+1, arr[i]);
        }
        putchar('\n');

        for(i=0;i<SIZE;i++)
        {
            arr[i]=0;
        }

        printf("Для генерации 1000 случайных чисел введите 1: ");
        scanf("%d", &choice);
    }

    printf("Hello world!\n");
    return 0;
}
