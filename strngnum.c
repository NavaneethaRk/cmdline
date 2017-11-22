#include<stdio.h>
int main(int argc, char *argv[])
{
    int num,rem,i,fact,sum=0,temp;
    num=atoi(argv[1]);
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
      printf("YES");
    else
      printf("NO");
}
