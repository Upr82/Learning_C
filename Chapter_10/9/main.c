#include <stdio.h>
#include <windows.h>

int main(void)
{
SetConsoleOutputCP(1251);
int urn[5]={100,200,300,400,500};
int *ptr1=urn;
int *ptr2, *ptr3;
ptr2=&urn[2];

printf("    Знач. указателя, разыменов. указатель,       адрес указателя\n");
printf("ptr1=%15p, *ptr1=%16d, &ptr1=%17p\n", ptr1, *ptr1, &ptr1);
printf("ptr2=%15p, *ptr2=%16d, &ptr2=%17p\n", ptr2, *ptr2, &ptr2);
//printf("ptr3=%15p, *ptr3=%16d, &ptr3=%17p\n", ptr3, *ptr3, &ptr3);

ptr3 = ptr1+3;
printf("\nсложение значения int с указателем:\n");
printf("ptr1+3 = %p, *(ptr+3) = %d\n", ptr3, *ptr3);

ptr1++;
printf("ptr1+1 = %p, *(ptr1+1) = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

ptr2--;
printf("ptr2-- = %p, *(ptr2--) = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

--ptr1;
ptr2++;

printf("\nВосстановление значений указателей:\n");
printf("ptr1= %p, ptr2= %p\n", ptr1, ptr2);

printf("Вычитание одного указателя из другого:\n");
printf("ptr2=%p - ptr1=%p = %d\n", ptr2, ptr1, ptr2-ptr1);
//ptr3-=2;
printf("ptr3=%p, ptr3 - 2 = %p\n", ptr3, ptr3-2);


return 0;
}
