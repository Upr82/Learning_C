#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5

int main(int argc, char *argv[])
{
    FILE *target, *source;
    //int ch;
    size_t bytes;
    char buff[SIZE];


    system("chcp 1251");
    if(argc!=3)
        {
            fprintf(stderr,"print: current_file source_file target_file");
            exit(EXIT_FAILURE);
        }

    if(strcmp(argv[1],argv[2])==0)
    {
        puts("Error, identified file names.");
        exit(EXIT_FAILURE);
    }

    if((source=fopen(argv[1],"rb"))==NULL)
    {
        puts("Error open source file.");
        exit(EXIT_FAILURE);
    }
    if((target=fopen(argv[2],"wb"))==NULL)
    {
        puts("Error open target file.");
        exit(EXIT_FAILURE);
    }
    while((bytes=fread(buff,sizeof(char),SIZE,source))>0)
        fwrite(buff,sizeof(char),bytes,target);


    printf("Hello world!\n");
    return 0;
}
