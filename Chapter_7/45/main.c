#include <stdio.h>
#include <windows.h>

const float S_ART = 2.05;
const float S_SVEK = 1.15;
const float S_MORK = 1.09;
const float DISCONT = 0.95;
const float DISCONT_STAGE = 100.00;
const float W_STAGE1 = 5.00;
const float W_STAGE2 = 20.00;
const float RATE_STAGE1 = 6.5;
const float RATE_STAGE2 = 14.0;
const float RATE_STAGE3 = 0.5;

char menu, i;

float art=0.0, svek=0.0, mork=0.0, ves=0.0, summa_zakaza, ves_zakaza;
float summa_dostavki;

void func_menu(void);

int main(void)
{
    SetConsoleOutputCP(1251);

    func_menu();

    while((scanf("%c", &menu)==1) && (menu!='q'))
    {
        switch(menu)
        {
        case 'a':
            printf("Введите вес артишоков: ");
            scanf("%f", &ves);
            art+=ves;
            break;
        case 'b':
            printf("Введите вес свеклы: ");
            scanf("%f", &ves);
            svek+=ves;
            break;
        case 'c':
            printf("Введите вес моркови: ");
            scanf("%f", &ves);
            mork+=ves;
            break;
        case 'v':
            printf("Заказ сформирован. Вы заказали:\n");
            if (art) printf("Артишоков %.2f фунта(ов) на $%.2f;\n", art, art*S_ART);
            if (svek) printf("Свеклы %.2f фунта(ов) на $%.2f;\n", svek, svek*S_SVEK);
            if (mork) printf("Моркови %.2f фунта(ов) на $%.2f;\n", mork, mork*S_MORK);
        }
     if (menu=='v') break;
     if (menu!='\n')
        func_menu();
    }

    if (menu!='q')
    {
        ves_zakaza=art+svek+mork;
        printf("Вес заказа %.2f фунтов\n", ves_zakaza);

        summa_zakaza=art*S_ART+svek*S_SVEK+mork*S_MORK;
        printf("Сумма заказа $%.2f\n", summa_zakaza);

        if (summa_zakaza>=DISCONT_STAGE)
        {
            summa_zakaza *= DISCONT;
            printf("Сумма заказа со скидкой 5%% $%.2f\n", summa_zakaza);
        }

        if (ves_zakaza<=W_STAGE1)       summa_dostavki=RATE_STAGE1;
        else if (ves_zakaza<=W_STAGE2)  summa_dostavki=RATE_STAGE1+RATE_STAGE2;
        else                            summa_dostavki=RATE_STAGE1+RATE_STAGE2+(ves_zakaza-W_STAGE2)*RATE_STAGE3;

        printf("Сумма доставки $%.2f\n", summa_dostavki);
        printf("Итого к оплате $%.2f\n", summa_zakaza+summa_dostavki);

    }


    return 0;
}







void func_menu(void)
{
    for (i=0;i<=45;i++) printf("*");
    printf("\n");

    printf("a) Артишок ($2.05 за фунт)\n");
    printf("b) Свекла ($1.15 за фунт)\n");
    printf("c) Морковь ($1.09 за фунт)\n");
    printf("v) Завершить заказ\n");
    printf("q) Выход\n");

    for (i=0;i<=45;i++) printf("*");
    printf("\n");

    printf("Введите нужный пункт: ");

}

