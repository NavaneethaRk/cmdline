#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int n,rem=0,num;
n=atoi(argv[1]);
if(n!=0)
{
 rem=n%10;
 num=n/10;
 n=rem*10+num;
}
printf("%d",n);
return 0;
}
