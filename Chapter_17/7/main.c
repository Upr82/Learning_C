#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#define LENGHT 255
#define SIZE 46


int main()
{
    system("chcp 1251");
    setlocale( LC_ALL,"Russian" );
    system("cls");
    char name[LENGHT]={0};
    char nameCALC[LENGHT+4]={0};
    int alphabet[SIZE]={0};
    char ch;
    int i=0, symb=0;

    FILE *target=NULL, *source=NULL;

    printf("Программа подсчета символов в тектовом файле.\n");
    printf(
           "Введите имя исходного файла в формате ххххх.txt, он должен быть в одной папке с исполняемым файлом:\n");
    scanf("%s", name);
    while(getchar()!='\n')
        continue;

    if((source=fopen(name, "r"))==NULL)
    {
        fprintf(stderr, "Ошибка открытия файла %s.\n", name);
        exit(EXIT_FAILURE);
    }
    strcpy(nameCALC, name);
    strcpy(strchr(nameCALC,'.'), "CALC.txt");

    if((target=fopen(nameCALC, "w"))==NULL)
    {
        fprintf(stderr, "Ошибка открытия файла %s.\n", nameCALC);
        exit(EXIT_FAILURE);
    }

    /*for(i=-128;i<128;i++)
        printf("[%3d] = '%c';\n", i,i);*/

    while(feof(source)==0)
    {
        (ch=getc(source));
        switch(ch)
        {
        case 'А':alphabet[0]++; break;
        case 'а':alphabet[0]++; break;
        case 'Б':alphabet[1]++; break;
        case 'б':alphabet[1]++; break;
        case 'В':alphabet[2]++; break;
        case 'в':alphabet[2]++; break;
        case 'Г':alphabet[3]++; break;
        case 'г':alphabet[3]++; break;
        case 'Д':alphabet[4]++; break;
        case 'д':alphabet[4]++; break;
        case 'Е':alphabet[5]++; break;
        case 'е':alphabet[5]++; break;
        case 'Ж':alphabet[6]++; break;
        case 'ж':alphabet[6]++; break;
        case 'З':alphabet[7]++; break;
        case 'з':alphabet[7]++; break;
        case 'И':alphabet[8]++; break;
        case 'и':alphabet[8]++; break;
        case 'Й':alphabet[9]++; break;
        case 'й':alphabet[9]++; break;
        case 'К':alphabet[10]++; break;
        case 'к':alphabet[10]++; break;
        case 'Л':alphabet[11]++; break;
        case 'л':alphabet[11]++; break;
        case 'М':alphabet[12]++; break;
        case 'м':alphabet[12]++; break;
        case 'Н':alphabet[13]++; break;
        case 'н':alphabet[13]++; break;
        case 'О':alphabet[14]++; break;
        case 'о':alphabet[14]++; break;
        case 'П':alphabet[15]++; break;
        case 'п':alphabet[15]++; break;
        case 'Р':alphabet[16]++; break;
        case 'р':alphabet[16]++; break;
        case 'С':alphabet[17]++; break;
        case 'с':alphabet[17]++; break;
        case 'Т':alphabet[18]++; break;
        case 'т':alphabet[18]++; break;
        case 'У':alphabet[19]++; break;
        case 'у':alphabet[19]++; break;
        case 'Ф':alphabet[20]++; break;
        case 'ф':alphabet[20]++; break;
        case 'Х':alphabet[21]++; break;
        case 'х':alphabet[21]++; break;
        case 'Ц':alphabet[22]++; break;
        case 'ц':alphabet[22]++; break;
        case 'Ч':alphabet[23]++; break;
        case 'ч':alphabet[23]++; break;
        case 'Ш':alphabet[24]++; break;
        case 'ш':alphabet[24]++; break;
        case 'Щ':alphabet[25]++; break;
        case 'щ':alphabet[25]++; break;
        case 'Ъ':alphabet[26]++; break;
        case 'ъ':alphabet[26]++; break;
        case 'Ы':alphabet[27]++; break;
        case 'ы':alphabet[27]++; break;
        case 'Ь':alphabet[28]++; break;
        case 'ь':alphabet[28]++; break;
        case 'Э':alphabet[29]++; break;
        case 'э':alphabet[29]++; break;
        case 'Ю':alphabet[30]++; break;
        case 'ю':alphabet[30]++; break;
        case 'Я':alphabet[31]++; break;
        case 'я':alphabet[31]++; break;
        case '0':alphabet[32]++; break;
        case '1':alphabet[33]++; break;
        case '2':alphabet[34]++; break;
        case '3':alphabet[35]++; break;
        case '4':alphabet[36]++; break;
        case '5':alphabet[37]++; break;
        case '6':alphabet[38]++; break;
        case '7':alphabet[39]++; break;
        case '8':alphabet[40]++; break;
        case '9':alphabet[41]++; break;

        case ' ':alphabet[42]++; break;
        case '\n':alphabet[43]++; break;

        case '.':alphabet[44]++; break;
        case ',':alphabet[44]++; break;
        case '!':alphabet[44]++; break;
        case '?':alphabet[44]++; break;

        default: alphabet[45]++; break;
        }
        symb++;
        //putc(ch,target);
    }

    printf("\nПодсчет выполнен, результат разбора также содержится в файле %s.\n", nameCALC);

    fprintf(target, "Состав текста в файле %s:\n", name);
    printf("\nСостав текста в файле %s:\n", name);
    for(i=0;i<32;i++)
    {
        fprintf(target, "символов %c: %-10d штук(и);\n", 'а'+i, alphabet[i]);
        printf("символов %c: %-10d штук(и);\n", 'а'+i, alphabet[i]);
    }

    for(i=0;i<10;i++)
    {
        fprintf(target, "символов %c: %-10d штук(и);\n", '0'+i, alphabet[32+i]);
        printf("символов %c: %-10d штук(и);\n", '0'+i, alphabet[32+i]);
    }

    fprintf(target, "%-30s %-10d штук(и);\n", "символов пробела:", alphabet[42]);
    printf("%-30s %-10d штук(и);\n", "символов пробела:", alphabet[42]);

    fprintf(target, "%-30s %-10d штук(и);\n","символов новой строки:", alphabet[43]);
    printf("%-30s %-10d штук(и);\n","символов новой строки:", alphabet[43]);

    fprintf(target, "%-30s %-10d штук(и);\n","символов '.', ',', '!', '?':", alphabet[44]);
    printf("%-30s %-10d штук(и);\n","символов '.', ',', '!', '?':", alphabet[44]);

    fprintf(target, "%-30s %-10d штук(и);\n","остальных символов :", alphabet[45]);
    printf("%-30s %-10d штук(и);\n","остальных символов :", alphabet[45]);

    fprintf(target, "%-30s %-10d штук(и).\n", "всего символов в тексте:", symb);
    printf("%-30s %-10d штук(и).\n", "всего символов в тексте:", symb);

    fprintf(target, "Конец.\n");
    printf("Конец. Для выхода нажми Enter.\n");

    if(fclose(source)!=0 || fclose(target)!=0)
        fprintf(stderr, "Ошибка закрытия файлов.\n");

    getchar();

    return 0;
}
