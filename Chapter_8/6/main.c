#include <stdio.h>

void draw(char c, int r, int cl);

int main(void)
{
    int ch, rows, cols;
    printf("Enter symbol and 2 int: ");
    while((ch=getchar())!='\n')
    {
        if(scanf("%d %d", &rows, &cols)!=2) break;
        draw(ch, rows, cols);
        while(getchar()!='\n')
            continue;

        printf("Enter symbol and 2 int: ");
        printf("For exit press Enter.\n");
    }
    printf("Happy end.\n");

    return 0;
}

void draw(char c, int r, int cl)
{
    int rows,cols;
    for (rows=1;rows<=r;rows++)
    {
        for (cols=1;cols<=cl;cols++)
            printf("%c",c);
        printf("\n");
    }
}
