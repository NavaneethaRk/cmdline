#include<stdio.h>
int main(int argc,char *argv[])
{
    int num,f=0,l=1,fib,i;
    num=atoi(argv[1]);
    printf("%d %d",f,l);
    for(i=0;i<num;i++)
    {
        fib=f+l;
        f=l;
        l=fib;
        printf(" %d",fib);
    }
    return 0;
}
