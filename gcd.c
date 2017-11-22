#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int m,n,i,g=1,a[100],k;
    m=atoi(argv[1]);
    n=atoi(argv[2]);
    for(i=1;i<m+n;i++)
    {
        k=0;
        if(m%i==0 && n%i==0) //to find factors for both
        {
            a[k]=i;   //store the values in array
            k++;
        }
    }
    for(i=0;i<=k;i++)  
    {
        if(a[i]>a[i+1])   //check for the greatest value
          g=a[i];
        else if(a[i+1]>a[i])
          g=a[i+1];
        else
          g=1;

    }
    printf("%d ",g);
    return 0;
}
