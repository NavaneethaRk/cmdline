#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int n,rem,num,rev=0;
num=atoi(argv[1]);
n=num;
while(n>0)
{
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
}
printf("%d",rev);
return 0;
}
