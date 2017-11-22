#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int temp;
    float far;
    temp=atoi(argv[1]);
    far=(temp*1.8)+32;
    printf("%.2f",far);
    return 0;
}
