#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
int num,rem,base=1,bin,dec=0;
bin=atoi(argv[1]);
num=bin;
while(num>0)
{
rem=num%10;
dec=dec+rem*base;
num=num/10;
base=base*2;
}
printf("%d",dec);
}
