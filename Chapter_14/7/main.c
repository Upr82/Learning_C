#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_SIZE 10
#define SIZE 20
#define ARR 2

struct names
{
    char first[NAME_SIZE];
    char second[SIZE];
};

struct boy
{
    struct names b_b;
    char food[SIZE];
    char job[SIZE];
    float rating;
};

int main()
{
    int i;
    size_t empt=0;
    struct boy friends[ARR]=
    {
        {{"�������","������"},
            "��������� �����",
            "������������",
            20.3
        },
        {{"����","����"},
            "������ �������",
            "��������",
            99.9
        }
    };

    system("chcp 1251");

    struct boy *bp;
    bp = &friends[0];

    printf("����� s1 = %p, s2 = %p\n", &friends[0], &friends[1]);

    bp = &friends[0];

    printf("����� bp = %p, bp+1=%p\n", bp, bp+1);

    for(i=0;i<ARR;i++)
    {
        printf("���� � %d:\n", i);
        printf("%20s: %s\n", "���", (bp+i)->b_b.first);
        printf("%20s: %s\n", "�������", (bp+i)->b_b.second);
        printf("%20s: %s\n", "���", (bp+i)->food);
        printf("%20s: %s\n", "������", (bp+i)->job);
        printf("%20s: %g\n", "�������", (bp+i)->rating);
    }

    if((empt=NAME_SIZE-strlen(bp->b_b.first)-1)
       >0)
        strncat(bp->b_b.first, " �.123456789", empt);
    if((empt=NAME_SIZE-strlen((bp+1)->b_b.first)-1)
       >0)
        strncat((bp+1)->b_b.first, " �.123456789", empt);

    for(i=0;i<NAME_SIZE;i++)
        printf("[%d] = %c - %d\n", i, friends[0].b_b.first[i], friends[0].b_b.first[i]);
    for(i=0;i<NAME_SIZE;i++)
        printf("[%d] = %c - %d\n", i, friends[1].b_b.first[i], friends[1].b_b.first[i]);

    (bp+1)->rating=101.1;

    for(i=0;i<ARR;i++)
    {
        printf("���� � %d:\n", i);
        printf("%20s: %s\n", "���", (*(bp+i)).b_b.first);
        printf("%20s: %s\n", "�������", (bp+i)->b_b.second);
        printf("%20s: %s\n", "���", (*(bp+i)).food);
        printf("%20s: %s\n", "������", (bp+i)->job);
        printf("%20s: %g\n", "�������", (bp+i)->rating);
    }

    printf("\nEnd!\n");
    return 0;
}
