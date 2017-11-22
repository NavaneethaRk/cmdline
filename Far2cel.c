#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    float far,temp;
    far=atof(argv[1]);
    temp=(far-32)/1.8;
    printf("%.2f",temp);
    return 0;
}
