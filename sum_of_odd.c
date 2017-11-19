#include<stdio.h>
int  main(int a,char *b[])
{
    int fst,lst,sum,i;
    fst=atoi(b[1]);
    lst=atoi(b[2]);
    for(i=fst;i<lst;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
