#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int friends = 5, i=1;


int main()
{
    SetConsoleOutputCP(1251);
    printf("Hello world!\n");
    for(i=1;(friends-i)*2<150;i++)
    {
        friends = (friends - i)*2;
        printf("¬ конце %d недели ушел(ло) %d друзей, но всего стало %d\n", i, i, friends);
    }

    return 0;
}
