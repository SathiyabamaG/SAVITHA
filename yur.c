#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int n=10,i,j;
    for(i=0;i<n;i++)
    scanf("%c",&a[i]);
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!='*')
    for(j=i+1;j<i;j++)
    {
    if(a[i]==a[j])
    {
    count++;
    a[j]='*';
    }
    }
    if(count%2==0)
    {
    
    printf("%c",a[i]);
    }
    count=1;
    }
    return 0;
    
}
