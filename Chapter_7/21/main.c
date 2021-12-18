#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    /*readin: printf("Enter score: ");
     scanf("%d", &score);
    if (score < 0)
        goto stage2;
    printf("Hello1!\n");
    goto readin;
    stage2: printf("Hello2!\n");*/

    printf("Enter score: ");
    scanf("%d", &score);
    while (score>=0)
    {
        printf("Hello1!\n");
        printf("Enter score: ");
        scanf("%d", &score);
    }
    printf("Hello2!\n");





    return 0;
}
