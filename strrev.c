#include <stdio.h>
int main(int argc,char *argv[])
{
    int len,f=0,l;
    char temp;
    for(len=0;argv[1][len]!=NULL;len++);
   // printf("%d",len);
    l=len-1;
    for(f=0;f<l;f++,l--)
    {
        temp=argv[1][f];
        argv[1][f]=argv[1][l];
        argv[1][l]=temp;
    }
    printf("%s",argv[1]);
    return 0;
}
