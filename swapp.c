#include<stdio.h>
int main()
{
int i,n,y;
scanf("%d",&n);
scanf("%d",&i);
y=n;
n=i;
i=y;
printf("%d\n%d",n,i);
return 0;
}
