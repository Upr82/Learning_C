#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    system("chcp 1251");
    int words, i=0, j, len, cur=0,old=0, SIZE, len_word;

    char **ptr;
    char *pba, *pstart, *pstop;

    printf("Введите количество вносимых слов (0 для выхода): ");
    while(scanf("%d", &words)==1 && words>0)
    {
        getchar();
        SIZE=words*20;
        pba=(char*)malloc(SIZE*sizeof(char));
        //char *arr[words];
        printf("Теперь введите %d слов(а).\n", words);
        ptr=(char **)malloc(words*sizeof(char**));

        while(i<SIZE-1 && (pba[i]=getchar())!='\n' )
               i++;
        pba[i]='\0';
        printf("Вот что ввели:\n%s\n", pba);

        len=strlen(pba);
        for(i=0, j=0;i<len;i++)
        {
            if(isalnum(pba[i]))
                cur=1;
                else cur=0;
            if(old==0 && cur==1)
            {
                pstart=&pba[i];
            }
            if(old==1 && cur==0)
            {
                pstop=&pba[i+1];
            }
            if(pstop>pstart)
            {
                len_word=pstop-pstart;
                *pstop='\0';
                ptr[j++]=pstart;
            }

            old=cur;
        }
        for(i=0;i<=j;i++)
            printf("%s\n",ptr[i]);

        free(pba);
        free(ptr);

        printf("Введите количество вносимых слов (0 для выхода): ");
    }


    printf("Hello world!\n");
    return 0;
}
