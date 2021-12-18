#include "name_fl.h"

void get_name(name_fl* st)
{
    printf("������� ���� ���: ");
    s_get(st->first, SIZE);
    printf("������� ���� �������: ");
    s_get(st->last, SIZE);
}
void show_name(name_fl* st)
{
    printf("%s %s.", st->first, st->last);
}
char* s_get(char *str, int n)
{
    char *result=NULL, *x=NULL;
    result=fgets(str, n, stdin);
    if(result)
    {
        x=strchr(result, '\n');
        if(x)
            *x='\0';
        else
            while(getchar()!='\n')
                continue;
    }
    return result;
}
