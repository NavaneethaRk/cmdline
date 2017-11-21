#include<stdio.h>
#include<stdlib.h>
void main(int argc, char** argv)
{
    float input,i,sqr;
    input=atof(argv[1]);
    input=input*1000*1000;
    for(i=0;i<=input;i++)
    {
        sqr=i*i;
        if(sqr>input)
             break;
    }
    printf("%.2f",(i-1)/1000.0);
}
