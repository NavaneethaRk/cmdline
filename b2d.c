#include<stdio.h>
int main(int a,char *b[])
{
    int dec,bin,rem,pos=1;
    bin=atoi(b[1]);
    while(bin!=0)
    {
        rem=bin%10;
        dec=rem*pos+dec;
        pos=pos*2;
        bin=bin/10;
    }
    printf("%d",dec);
    return 0;
}
