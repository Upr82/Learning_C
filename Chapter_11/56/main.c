#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 50


int main()
{
    system("chcp 1251");
    char text[SIZE];
    int i=0, word=0, prop=0,stroch=0, prep=0, num=0, pr_ch=0, cur_ch=0, in_word=0;


    while((text[i]=getchar())!=26 && i<(SIZE-1))
    {
        if(isupper(text[i])) prop++;
        if(islower(text[i])) stroch++;
        if(isdigit(text[i])) num++;
        if(ispunct(text[i])) prep++;

        if(i>0 && isalnum(text[i-1]) && (isspace(text[i]) || ispunct(text[i])))
            word++;

        i++;
    }

    text[i]='\0';



    putchar('\n');
    printf("%s\n", text);
    putchar('\n');

    printf("� ������� ������ ��������:\n");
    printf("����: %d\n", word);
    printf("��������� ����: %d\n", prop);
    printf("�������� ����: %d\n", stroch);
    printf("������ ����������: %d\n", prep);
    printf("����: %d\n", num);
    return 0;
}
