#include<stdio.h>
int main()
{
int i,n,y;
scanf("%d",&n);
scanf("%d",&i);
scanf("%d",&y);
if(i>n&&i>y)
printf("%dis greatest",i);
else if(n>i&&n>y)
printf("%d is greatest",n);
else
printf("%d is greatest",y);
return 0;
}
