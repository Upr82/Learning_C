#include "main.h"



int calc(struct month *m, int n, char *str)
{
    _Bool fin_mon = false;
    int i;
    int cur, days=0;


    for(i=0;i<n;i++)
        {
            if(!(strcmp((m+i)->name, str)))
            {
                printf("¬ы ввели мес€ц %s (%s), в нЄм %d дней.\n",
                    (m+i)->name, (m+i)->abb, (m+i)->day);
                for(cur=0, days=0;cur<=i;cur++)
                    days+=(m+cur)->day;

                fin_mon=true;
                break;
            }
        }

        if(fin_mon==false)
            {
                printf("ћес€ц с названием %s мне неизвестен.\n", str);
                days=0;
            }
        fin_mon=false;

    return days;
}



char *s_gets(char *str, int n)
{
    char *result=NULL, *fin=NULL, *temp;
    int i=0;
    result=fgets(str, n, stdin);
    if(result)
    {
        fin=strchr(str, '\n');
        if (fin)
            *fin='\0';
        else while(getchar()!='\n')
                continue;
    }
    temp=result;
    while(*temp)
    {
        if(i==0)
        *temp=toupper(*temp);
         else
        *temp=tolower(*temp);
        temp++;
        i++;
    }
    return result;
}
