#include<stdio.h>
int main()
{
int n,c=0,r;
scanf("%d",&n);
while(n>0)
  {
    r=n%10;
    n=n/10;
    if(r==7)
      c++;
  }
  printf("%d",c);
  return 0;
}
