#include <stdio.h>
int main()
{
 char s[50];
 int  i, len = 0;
 gets(s);
 
 for (i=0; s[i] != '\0'; i++) {
  len++;                     
 }
  printf(" %d",  len);
return 0;
}
