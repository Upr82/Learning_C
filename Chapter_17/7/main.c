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

    printf("��������� �������� �������� � �������� �����.\n");
    printf(
           "������� ��� ��������� ����� � ������� �����.txt, �� ������ ���� � ����� ����� � ����������� ������:\n");
    scanf("%s", name);
    while(getchar()!='\n')
        continue;

    if((source=fopen(name, "r"))==NULL)
    {
        fprintf(stderr, "������ �������� ����� %s.\n", name);
        exit(EXIT_FAILURE);
    }
    strcpy(nameCALC, name);
    strcpy(strchr(nameCALC,'.'), "CALC.txt");

    if((target=fopen(nameCALC, "w"))==NULL)
    {
        fprintf(stderr, "������ �������� ����� %s.\n", nameCALC);
        exit(EXIT_FAILURE);
    }

    /*for(i=-128;i<128;i++)
        printf("[%3d] = '%c';\n", i,i);*/

    while(feof(source)==0)
    {
        (ch=getc(source));
        switch(ch)
        {
        case '�':alphabet[0]++; break;
        case '�':alphabet[0]++; break;
        case '�':alphabet[1]++; break;
        case '�':alphabet[1]++; break;
        case '�':alphabet[2]++; break;
        case '�':alphabet[2]++; break;
        case '�':alphabet[3]++; break;
        case '�':alphabet[3]++; break;
        case '�':alphabet[4]++; break;
        case '�':alphabet[4]++; break;
        case '�':alphabet[5]++; break;
        case '�':alphabet[5]++; break;
        case '�':alphabet[6]++; break;
        case '�':alphabet[6]++; break;
        case '�':alphabet[7]++; break;
        case '�':alphabet[7]++; break;
        case '�':alphabet[8]++; break;
        case '�':alphabet[8]++; break;
        case '�':alphabet[9]++; break;
        case '�':alphabet[9]++; break;
        case '�':alphabet[10]++; break;
        case '�':alphabet[10]++; break;
        case '�':alphabet[11]++; break;
        case '�':alphabet[11]++; break;
        case '�':alphabet[12]++; break;
        case '�':alphabet[12]++; break;
        case '�':alphabet[13]++; break;
        case '�':alphabet[13]++; break;
        case '�':alphabet[14]++; break;
        case '�':alphabet[14]++; break;
        case '�':alphabet[15]++; break;
        case '�':alphabet[15]++; break;
        case '�':alphabet[16]++; break;
        case '�':alphabet[16]++; break;
        case '�':alphabet[17]++; break;
        case '�':alphabet[17]++; break;
        case '�':alphabet[18]++; break;
        case '�':alphabet[18]++; break;
        case '�':alphabet[19]++; break;
        case '�':alphabet[19]++; break;
        case '�':alphabet[20]++; break;
        case '�':alphabet[20]++; break;
        case '�':alphabet[21]++; break;
        case '�':alphabet[21]++; break;
        case '�':alphabet[22]++; break;
        case '�':alphabet[22]++; break;
        case '�':alphabet[23]++; break;
        case '�':alphabet[23]++; break;
        case '�':alphabet[24]++; break;
        case '�':alphabet[24]++; break;
        case '�':alphabet[25]++; break;
        case '�':alphabet[25]++; break;
        case '�':alphabet[26]++; break;
        case '�':alphabet[26]++; break;
        case '�':alphabet[27]++; break;
        case '�':alphabet[27]++; break;
        case '�':alphabet[28]++; break;
        case '�':alphabet[28]++; break;
        case '�':alphabet[29]++; break;
        case '�':alphabet[29]++; break;
        case '�':alphabet[30]++; break;
        case '�':alphabet[30]++; break;
        case '�':alphabet[31]++; break;
        case '�':alphabet[31]++; break;
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

    printf("\n������� ��������, ��������� ������� ����� ���������� � ����� %s.\n", nameCALC);

    fprintf(target, "������ ������ � ����� %s:\n", name);
    printf("\n������ ������ � ����� %s:\n", name);
    for(i=0;i<32;i++)
    {
        fprintf(target, "�������� %c: %-10d ����(�);\n", '�'+i, alphabet[i]);
        printf("�������� %c: %-10d ����(�);\n", '�'+i, alphabet[i]);
    }

    for(i=0;i<10;i++)
    {
        fprintf(target, "�������� %c: %-10d ����(�);\n", '0'+i, alphabet[32+i]);
        printf("�������� %c: %-10d ����(�);\n", '0'+i, alphabet[32+i]);
    }

    fprintf(target, "%-30s %-10d ����(�);\n", "�������� �������:", alphabet[42]);
    printf("%-30s %-10d ����(�);\n", "�������� �������:", alphabet[42]);

    fprintf(target, "%-30s %-10d ����(�);\n","�������� ����� ������:", alphabet[43]);
    printf("%-30s %-10d ����(�);\n","�������� ����� ������:", alphabet[43]);

    fprintf(target, "%-30s %-10d ����(�);\n","�������� '.', ',', '!', '?':", alphabet[44]);
    printf("%-30s %-10d ����(�);\n","�������� '.', ',', '!', '?':", alphabet[44]);

    fprintf(target, "%-30s %-10d ����(�);\n","��������� �������� :", alphabet[45]);
    printf("%-30s %-10d ����(�);\n","��������� �������� :", alphabet[45]);

    fprintf(target, "%-30s %-10d ����(�).\n", "����� �������� � ������:", symb);
    printf("%-30s %-10d ����(�).\n", "����� �������� � ������:", symb);

    fprintf(target, "�����.\n");
    printf("�����. ��� ������ ����� Enter.\n");

    if(fclose(source)!=0 || fclose(target)!=0)
        fprintf(stderr, "������ �������� ������.\n");

    getchar();

    return 0;
}
