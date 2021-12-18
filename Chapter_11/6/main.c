#include <stdio.h>
#include <windows.h>
int main(void)
{
    SetConsoleOutputCP(1251);
    const char *source="Не дайте себя запутать!";
    const char *target;
    target=source;
    puts("Что у нас получилось.\n");
    printf("%s; adress = %p; value = %p\n",
           source, &source, source);
    printf("%s; adress = %p; value = %p\n",
           target, &target, target);

    return 0;
}
