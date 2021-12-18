/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

#include <stdio.h>

int imin(int a, int b);
int a,b;
int main(void)
{
    printf("Enter number #1 and number #2 (or q for quit): ");

    while(scanf("%d%d", &a, &b)==2)
    {
        printf("Smallest number = %d.\n", imin(a,b));
        printf("Enter number #1 and number #2 (or q for quit): ");
    }

    return 0;
}

int imin(int a, int b)
{

    return ((a<b)?a:b);



}
