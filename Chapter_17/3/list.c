#include "list.h"
#include <stdio.h>
#include <stdlib.h>

static void CopyToNode(Item item, Node *pnode);

void InitializeList(List *plist)//устанавливает список в пустое состояние
{
    *plist=NULL;
}

//True, если список пуст
bool ListIsEmpty(const List *plist)
{
    if(*plist==NULL)
        return true;
    else
        return false;
}

//True, если список полон
bool ListIsFull(const List *plist)
{
    Node *pt;

    bool full;
    pt=(Node *)malloc(sizeof(Node));
    if(pt==NULL)
        full=true;
    else
        full=false;
    free(pt);
    return full;
}

//возвращает количество узлов
unsigned int ListItemCount(const List *plist)
{
    unsigned int count=0;

    Node *pnode =*plist;
    while(pnode!=NULL)
    {
        count++;
        pnode=pnode->next;
    }
    return count;
}

//создаёт узел для хранения и помещает в конец списка
bool AddItem(Item item, List *plist)
{
    Node *pnew;
    Node *scan=*plist;


    pnew=(Node *)malloc(sizeof(Node));
    if(pnew==NULL)
        return false;

    CopyToNode(item, pnew);
    pnew->next=NULL;
    if(scan==NULL)
        *plist=pnew;
    else
    {
        while(scan->next!=NULL)
            scan=scan->next;
        scan->next=pnew;
    }
    return true;
}

//посещает каждый узел и выполняет ф-ию pfun
void Traverse(const List *plist, void(*pfun)(Item item))
{
    Node *pnode = *plist;

    while(pnode!=NULL)
    {
        (*pfun)(pnode->item);
        pnode=pnode->next;
    }
}

//Освобождает память
void EmptyTheList(List *plist)
{
    Node * psave;
    while(*plist!=NULL)
    {
        psave=(*plist)->next;
        free(*plist);
        *plist=psave;
    }
}

//определение локольной функции, копирует элемент в узел
static void CopyToNode(Item item, Node *pnode)
{
    pnode->item=item;
}
