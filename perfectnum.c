#include<stdio.h>
int main(int a,char *b[])
{
    int num,i,sum=0;
    num=atoi(b[1]);
    for(i=1;i<num;i++) //to find factors
    {
        if(num%i==0)  //factor or not, factor=completely divisable
        {
            sum=sum+i; //sum of factors
        }
    }
    if(num==sum) //perfect num=sum of factors
     printf("YES");
    else
     printf("NO");
    return 0;
}
