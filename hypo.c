#include<stdio.h>
#include<stdlib.h>
void main(int argc, char* argv[])
{
    int a,b,c,h;
    float i;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    c=(a*a+b*b)*1000*1000;
    for(i=0;i<c;i++)
    {
        h=i*i;
        if(h>c)
        break;
    }
    printf("%.2f",(i-1)/1000);
    return 0;
}
