#include <stdio.h>
#include <windows.h>

#define STARS "***********************"
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define QUIT 5
#define SALE 0.95

int menu(void);

int getnights(void);

void showprice(double hotel_rate, int nights);
