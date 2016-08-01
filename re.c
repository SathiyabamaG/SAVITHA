#include<stdio.h>
#include<string.h>
int main() {
   char a[100], temp,b[100];
   int i, j = 0,k,l=0;
   gets(a);
   i=0; 
   j = strlen(a) - 1;
 
   while (i < j) {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      i++;
      j--;
   }
   for(k=0;k<=strlen(a);k++) {  
        if(a[k]=='a'||a[k]=='e'||a[k]=='i'||a[k]=='o'||a[k]=='u'||a[k]=='A'||a[k]=='E'||a[k]=='I'||a[k]=='O'||a[k]=='U')
                a[k]=' ';
        else 
                b[l++]=a[k];
    } 
    b[l]='\0';
   return 0;
}
