#include <stdio.h>
#include <stdlib.h>
#include "Anton.h"
#include "list.h"

void showmovies(Item item);

int main()
{
    system("chcp 1251");

    List movies;
    Item temp;

    InitializeList(&movies);
    if(ListIsFull(&movies))
    {
        fprintf(stderr,"��������� ������ �����������. ��������� ���������!\n");
        exit(1);
    }
    //���� � ���������� ����������
    puts("������� �������� ������� ������: ");
    while(s_gets(temp.title, TSIZE)!=NULL && temp.title[0]!='\0')
    {
        puts("������� �������� ��������: ");
        scanf("%d", &temp.rating);
        eat_line();

        if(AddItem(temp, &movies)==false)
        {
            fprintf(stderr, "�������� � ���������� ������.\n");
            break;
        }
        if(ListIsFull(&movies)==true)
        {
            fprintf(stderr, "������ �����.\n");
            break;
        }
        puts("������� �������� ���������� ������ (��� ������ ������ ��� ����������): ");
    }
    //�����������
    if(ListIsEmpty(&movies))
    {
        printf("������ �� �������.\n");
    } else
    {
        printf("������ �������: \n");
        Traverse(&movies, showmovies);
    }

    printf("�� ����� %d �������.\n", ListItemCount(&movies));

    EmptyTheList(&movies);

    printf("\nEnd!\n");
    return 0;
}

void showmovies(Item item)
{
    printf("�����: %-44s, �������: %d\n", item.title, item.rating);
}
