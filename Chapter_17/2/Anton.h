//моя первая библиотека Anton.h
#ifndef HELLO
	#define HELLO puts("Hello! Its Antons library")
#endif

void eat_line(void);//функция доедания строки(забираем \n)
char *s_gets(char *str, int n);//внесение строки в массив без \n

void show_arr_i(const int arr[], int n, int col);//вывод массива int с col столбцов

void fill_arr_i(int arr[], int n);//заполнение массива int