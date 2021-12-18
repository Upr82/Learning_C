#ifndef NAME_FL_H_INCLUDED
#define NAME_FL_H_INCLUDED

#include <stdio.h>
#include <string.h>
#define SIZE 8

typedef struct
{
    char first[SIZE];
    char last[SIZE];
} name_fl;

void get_name(name_fl *);
void show_name(name_fl *);
char* s_get(char*, int);

#endif // NAME_FL_H_INCLUDED


