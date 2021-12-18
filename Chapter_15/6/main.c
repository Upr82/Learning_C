#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SOLID 0
#define DOTTED 1
#define DASHED 2

#define BLUE 4
#define GREEN 2
#define RED 1
#define BLACK 0

#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)

const char *colors[8]={"������","�������",
"�������","������","�����","���������","�������","�����"};

struct box_props {
bool opaque :1;
unsigned int fill_color :3;
unsigned int :4;
bool show_border :1;
unsigned int border_color :3;
unsigned int border_style :2;
unsigned int :2;
};

void show_settings(const struct box_props *pb);

int main()
{
    system("chcp 1251");

    struct box_props boxp={true, YELLOW, true, CYAN, DOTTED};

    show_settings(&boxp);

    boxp.border_style=SOLID;
    boxp.border_color=GREEN;
    boxp.opaque=false;

    show_settings(&boxp);

    printf("\nHello world!\n");
    return 0;
}
void show_settings(const struct box_props *pb)
{
    printf("���������: %s\n", (pb->opaque==true)?"��":"���");
    printf("���� ����: %s\n", colors[pb->fill_color]);
    printf("�������: %s\n", pb->show_border==true? "������" : "��������");
    printf("���� �������: %s\n", colors[pb->border_color]);
    printf("����� �������: ");
    switch (pb->border_style)
    {
    case SOLID:
        printf("��������\n");
        break;
    case DOTTED:
        printf("�����\n");
        break;
    case DASHED:
        printf("�������\n");
        break;
    }
}
