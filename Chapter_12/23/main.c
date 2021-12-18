#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    system("chcp 1251");
    int words, cur_words=0, i=0, old_c=0,cur_c=0;
    char **parray;
    char *ptemp, *pstart, *pstop;
    printf("¬ведите количество слов: ");
    scanf("%d", &words);
    getchar();
    parray=(char**)malloc(words*sizeof(char*));
    ptemp=(char*)malloc(words*20);
    puts("¬ведите свой текст:");
    while(getchar()!='\n' && cur_words<=words)
    {
        ptemp[i]=getchar();
        if(isalnum(ptemp[i]))
        cur_c=1;
        else
            cur_c=0;

        if(old_c==0 && cur_c==1)
            pstart=&ptemp[i];
        if(old_c==1 && cur_c==0)
            {
                //ptemp[i]='\0';
                pstop=&ptemp[i];
                parray[cur_words]=pstart;
                cur_words++;
            }

        /*if(old_c==0 && cur_c==1)
            parray[cur_words]=ptemp+i;

        old_c=cur_c;*/
        i++;
    }

    for(i=0;i<words;i++)
        puts(parray[i]);

    free(ptemp);
    free(parray);
    printf("end!\n");
    return 0;
}
