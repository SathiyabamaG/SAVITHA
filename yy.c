#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100]={0};
    scanf("%s",a);
    int n=strlen(a);
    int i,j,u=0,count=0;
    for(i=0;i<n;i++)
    {
    for(j=0;j<i;j++)
    {
    if(a[i]==a[j])
    {
    count=1;
    }
    }
    if(count==0)
    {
    b[u]=a[i];
    u++;
    }
    count=0;
    }

    for(j=0;j<strlen(b);j++)
    {
    printf("%c",b[j]);
    }
    return 0;
    
}
