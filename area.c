#include <stdio.h>
int main(int a,char *b[])
{
    int dia;
    float rad,area;
    dia=atoi(b[1]);
    rad=dia/2;
    area=3.14*rad*rad;
    printf("%.2f",area);
    return 0;
}
