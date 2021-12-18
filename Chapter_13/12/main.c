#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

void func_r(void);
void func_W(const char *);
void func_X(const char *);
void func_Y(const char *);

int main()
{
    srand(time(0));
    char str_in[SIZE];
    while(1)
    {
        while(fscanf(stdin,"%s",str_in)==1 && str_in[0]==':')
        {
            /*while(getchar()!='\n')
                continue;*/
            //getchar();
            //for(i=0;i<SIZE;i++) fprintf(stdout,"[%d] = %c - %d\n", i,str_in[i],str_in[i]);
            //fprintf(stdout,"%s\n",str_in);

            switch (str_in[1])
            {
            case 'R':
                func_r();
                break;
            case 'W':
                func_W(str_in+2);
                break;
            case 'X':
                func_X(str_in+2);
                break;
            case 'Y':
                func_Y(str_in+2);
                break;
            default:
                fprintf(stdout,"Error input.\n");
            }
        }
        fprintf(stdout,"Error input.\n");
    }
    return 0;
}
void func_r(void)
{
    float random_flt;
    random_flt=16.0+(float)rand()/32768;
    fprintf(stdout,"R = %g\n", random_flt);
}
void func_W(const char *str)
{
    static float my_W=0.016666;
    float temp_W=my_W;
    if(str[0]!=0)
    temp_W=atof(str);
    if(temp_W>0.0 && temp_W<=100.0)
    {
        my_W=temp_W;
        fprintf(stdout,"W = %g\n", my_W);
    }
    else
    {
        fprintf(stdout,"Error, out of range: 0<W<1000.0\n");
        fprintf(stdout,"W = %g\n", my_W);
    }
}
void func_X(const char *str)
{
    static float my_X=0.0;
    float temp_X=my_X;
    if(str[0]!=0)
    temp_X=atof(str);
    if(temp_X>=-1.0 && temp_X<=1.0)
    {
        my_X=temp_X;
        fprintf(stdout,"X = %g\n", my_X);
    }
    else
    {
        fprintf(stdout,"Error, out of range: -1.0<=X<=1.0\n");
        fprintf(stdout,"X = %g\n", my_X);
    }
}
void func_Y(const char *str)
{
    static float my_Y=40.0;
    float temp_Y=my_Y;
    if(str[0]!=0)
    temp_Y=atof(str);
    if(temp_Y>=1.0 && temp_Y<=300.0)
    {
        my_Y=temp_Y;
        fprintf(stdout,"Y = %g\n", my_Y);
    }
    else
    {
        fprintf(stdout,"Error, out of range: 1.0<=Y<=300.0\n");
        fprintf(stdout,"Y = %g\n", my_Y);
    }
}
