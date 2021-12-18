#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    system("chcp 1251");
    char start[14]= {"Быть лучшим!"};
    char *bad = "худшим";
    char *ptr;
    int i;


    puts(start);
    ptr=strcpy((start+11), bad);
    puts(start);
    puts(ptr);
    for(i=0;i<20;i++)
    {
        printf("%c = %d\n", start[i], start[i]);
    }






    //getchar();
    return 0;
}
