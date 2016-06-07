#include<stdio.h>
int main(){
    char a[7]={'1','2','3','4','3','2','1'};
    char b[7][7]={' '};;
    int i,k=0,j;
    for(i=0;i<7;i++){
       b[i][i]=a[k];
       b[7-i-1][i]=a[k];
       k++;
    }
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
        printf("%c ",b[i][j]);
    }
    printf("\n");
    }
}
