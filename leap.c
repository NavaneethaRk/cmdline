#include<stdio.h>
#include<stdlib.h>
void main(int argc, char* argv[])
{
    int year;
    year=atoi(argv[1]);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("YES");
            }
        }
        else
           printf("YES");
    }
    else
     printf("NO");
}
