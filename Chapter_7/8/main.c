#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int number,i,mnoj;
_Bool b;

int main()
{
    SetConsoleOutputCP(1251);
    printf("������� ����� �����: ");
    while (scanf("%d", &number)==1)
    {
        for(i=2, b=1;(i*i)<=number;i++)
        {
            if (number%i==0)
            {
                    if (i*i!=number)printf("%4d ������� �� %3d � �� %3d;\n", number, i, number/i);
                    else printf("%4d ������� �� %3d;\n", number, i);
                    b=0;
            }

        }
        if (b) printf("%d �������� ������� ������.\n", number);



        printf("������� ����� �����: ");
    }






    return 0;
}
