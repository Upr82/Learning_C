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
           printf("��� 1\n");
           if (ch=='b') break;
           if (ch=='q') printf("��� 2\n��� 3\n");
           if (ch=='h') printf("��� 3\n");


       }


    }
    printf("������!\n");
    getchar();
    return 0;
}
 /*if (ch=='\n')
            continue;
        printf("��� 1\n");
        /*if (ch=='c')
            continue;
        if (ch== 'b')
            break;
        else if (ch== 'h')
            goto laststep;
        printf("��� 2\n");
        laststep: printf("��� 3\n");*/
