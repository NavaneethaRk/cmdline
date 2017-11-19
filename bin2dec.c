#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
int num,rem,pos=1,bin,dec=0;
bin=atoi(argv[1]);
num=bin;
while(num>0)
{
rem=num%10;
dec=dec+rem*pos;
num=num/10;
pos=pos*2;
}
printf("%d",dec);
}
