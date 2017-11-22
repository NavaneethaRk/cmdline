#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    float l,b,area;
    l=atof(argv[1]);
    b=atof(argv[2]);
    area=0.5*l*b;
    printf("%.2f",area);
    return 0;
}
