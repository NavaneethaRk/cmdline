#include <stdio.h>
int main(int argc,char *argv[])
{
  int n,i,c,ind,d=0,e,g=0,count=0;
  char b[100],temp;
  for(ind=0;argv[1][ind]!=NULL;ind++); //to find strlen
  e=ind;
  c=ind-1;
  for(d=0;d<ind;d++) //to copy string to another array
  {
      b[d]=argv[1][d];
  }
  for(ind=0;ind<c;ind++,c--) //to reverse a string in array
  {
        temp=argv[1][ind];
        argv[1][ind]=argv[1][c];
        argv[1][c]=temp;
  }
  for(i=0;i<e;i++)  //for strcmp
{
   if(b[i]==argv[1][i])
      count++;}
 if(count==e)
   printf("yes");
 else
   printf("no");
  return 0;
}
