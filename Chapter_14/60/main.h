#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 10
#define ABB 4
#define ALL_MONTHS 12

struct month {
char name[SIZE];
char abb[ABB];
int day;
int num;
};
int calc(struct month *m, int n, char *str);
char *s_gets(char *str, int i);
