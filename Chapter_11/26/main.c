#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    system("chcp 1251");
    char arr[40];
    printf("¬веди текст: ");
    fgets(arr, 40, stdin);
    puts(arr);



    return 0;
}
