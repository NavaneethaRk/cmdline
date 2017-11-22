#include<stdio.h>
int main(int argc, char *argv[])
{
    int num,rem,i,fact,sum,temp,r1,r2;
    r1=atoi(argv[1]);
    r2=atoi(argv[2]);
    for(num=r1;num<r2;num++,sum=0)
    {
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        for(fact=1,i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(num==sum)
     printf("%d ",num);
    }
}
