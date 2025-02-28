#include<stdio.h>
int main(){
    int r,c,n,x=1;
    scanf("%d",&n);
    for(r=0;r<n;r++){
        for(c=1;c<=r+n;c++){
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }    
}