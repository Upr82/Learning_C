#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define CP "-p"
#define CU "-u"
#define CL "-l"
#define SIZE 2

int main(int argc, char *argv[])
{
    //system("chcp 1251");
    char ch;
    int select;
    printf("argc = %d, %s\n",argc, argv[argc-1]);
    if(argc==1)
        argv[1]="";


    if (strncmp(argv[1],CU,SIZE)==0)
        {   select=1;
            puts("Select upper register.");
        }
        else
    if (strncmp(argv[1],CL,SIZE)==0)
        {   select=2;
            puts("Select lower register.");
        }
        else
        {
            puts("No argument.");
            select=3;
        }

    while((ch=getchar())!=EOF)
    {
        switch(select)
        {
            case 1:
                ch=toupper(ch);
                putchar(ch);
                break;
            case 2:
                ch=tolower(ch);
                putchar(ch);
                break;
            case 3:
                putchar(ch);
                break;
            default:
                putchar(ch);
        }
    }


    printf("\nEnd!\n");
    return 0;
}
