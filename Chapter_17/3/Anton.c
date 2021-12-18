#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void eat_line(void)
{
	while(getchar()!='\n')
		continue;
}

char *s_gets(char *str, int n)
{
	char *result=NULL, *fin=NULL;
	result=fgets(str, n, stdin);
	if(result)
	{
		fin=strchr(str, '\n');
		if(fin)
			*fin='\0';
		else eat_line();		
	}
	return result;
}

void show_arr_i(const int arr[], int n, int col)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i%col==0 && i!=0)
			putchar('\n');
		printf("%-10d",arr[i]);
	}
	putchar('\n');
}

void fill_arr_i(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
		arr[i]=(int)((rand()+i)/100);
}