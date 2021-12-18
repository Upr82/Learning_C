#include <stdio.h>
#include <windows.h>


int main (void)
{
    SetConsoleOutputCP(1251);
    char ch='a';
    while ((ch=getchar())!='#')
    {
       if (ch!='\n')
       {
           printf("иру 1\n");
           if (ch=='b') break;
           if (ch=='q') printf("иру 2\nиру 3\n");
           if (ch=='h') printf("иру 3\n");


       }


    }
    printf("Уюђютю!\n");
    getchar();
    return 0;
}
 /*if (ch=='\n')
            continue;
        printf("иру 1\n");
        /*if (ch=='c')
            continue;
        if (ch== 'b')
            break;
        else if (ch== 'h')
            goto laststep;
        printf("иру 2\n");
        laststep: printf("иру 3\n");*/
