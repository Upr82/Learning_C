#include <string.h>
#include <stdio.h>
char *s_gets(char *str, int n)
{
    char *result;
    int i=0;
    result=fgets(str, n , stdin);
    if(result)
    {
        while(str[i]!='\n' && str[i]!='\0')
            i++;
        if (str[i]=='\n')
            str[i]='\0';
        else while(getchar()!='\n')
                continue;
    }
    return result;
}
