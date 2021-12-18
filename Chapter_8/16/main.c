#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

const int LOW_LIMIT=0;
const int HIGH_LIMIT=100;
const char CHOICE1 = 'a';
const char CHOICE2 = 'b';
const char YES = 'y';
const char NO = 'n';

char get_choice(char one, char two);

int count=0, medium, medium_plus_1, number, cur_low_limit, cur_high_limit, mass_size, i=0,j;
char choice, victory;
bool lies=false;
bool good_number=true;

int main(void)
{
    cur_low_limit=LOW_LIMIT;
    cur_high_limit=HIGH_LIMIT;
    SetConsoleOutputCP(1251);
    mass_size= HIGH_LIMIT - LOW_LIMIT;
    int bad_num[mass_size];
    for(j=0;j<mass_size;j++)
        bad_num[j]=-2000000000;


    printf("Это программа, в которой компьютер должен угадать задуманное\n");
    printf("пользователем число.\n");
    printf("Загадайте целое число от %d до %d.\n", LOW_LIMIT, HIGH_LIMIT);
    while(count<=100)
    {
        medium =(cur_low_limit+cur_high_limit)/2;
        medium_plus_1=medium+1;

        for(j=0;j<mass_size;j++)
        {
            if (bad_num[j]==cur_low_limit)
            {
                good_number=false;
                break;
            }
        }

        if (good_number)
        {
            printf("Вы загадали число %d? (y - да, n - нет)\n", cur_low_limit);
            count++;
            victory=get_choice(YES, NO);
            if (victory==YES)
            {
                number = cur_low_limit;
                /*for (j=0;j<=100;j++)
                {
                    if (bad_num[i]==number)
                    {
                        printf("Ты играешь не честно! Число %d уже было!\n", number);
                        lies=true;
                        break;
                    }
                }*/
                printf("Загаданное число %d было отгадано за %d шагов!\n", number, count);
                break;
            } else
            {
                bad_num[i]= cur_low_limit;
                i++;
            }
        }
        good_number=true;

        /*printf("Вы загадали число %d? (y - да, n - нет)\n", medium);
        count++;
        victory=get_choice(YES, NO);
        if (victory==YES)
        {
            number = medium;
            printf("Загаданное число %d было отгадано за %d шагов!\n", number, count);
            break;
        } else
        {
            bad_num[i]= medium;
            i++;
        }*/


        for(j=0;j<mass_size;j++)
        {
            if (bad_num[j]==cur_high_limit)
            {
                good_number=false;
                break;
            }
        }

        if (good_number)
        {

            printf("Вы загадали число %d? (y - да, n - нет)\n", cur_high_limit);
            count++;
            victory=get_choice(YES, NO);
            if (victory==YES)
            {
                number = cur_high_limit;
                printf("Загаданное число %d было отгадано за %d шагов!\n", number, count);
                break;
            }
            else
            {
                bad_num[i]= cur_high_limit;
                i++;
            }
        }
        good_number=true;

        printf("Укажите диапазон, в котором находится загаданное число:\n");
        printf("a. от %d до %d  b. от %d до %d\n", cur_low_limit, medium, medium_plus_1, cur_high_limit);
        choice=get_choice(CHOICE1, CHOICE2);

        if (choice=='a')
        {
            cur_high_limit=medium;
        }
        if (choice=='b')
        {
            cur_low_limit=medium_plus_1;
        }
    }


    return 0;
}

char get_choice(char one, char two)
{
    char ch;
    while((ch=getchar())!=one && ch!=two)
    {
        printf("Введите правильный символ: ");
        while(getchar()!='\n')
            continue;
    }
    while(getchar()!='\n')
            continue;
    return ch;
}
