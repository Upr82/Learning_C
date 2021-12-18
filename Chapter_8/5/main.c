#include <stdio.h>
#include <windows.h>
char ch;
int guess =1;
int main(void)
{
    SetConsoleOutputCP(1251);
    printf("Выбери целое число от 1 до 100.\n");
    printf("Если я прав, введи 'y', если нет, то 'n'.\n");
    printf("Ты загадал число %d?\n", guess);
    while(((ch=getchar())!='y')&&(guess<=100))
    {
        if (ch=='n') printf("Не угадал. Попробую ещё. Ты загадал %d?\n", ++guess);
        else printf("Принимаются только правильные ответы.\n", ++guess);


        while (getchar()!= '\n')
            continue;
    }
    printf("Вот и всё! ты загадал %d!\n", guess);



    return 0;
}
