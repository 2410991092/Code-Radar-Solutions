#include<stdio.h>
int main(){
    int r,c,n,s,k;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(k=n;k>r;k--){
            printf(" ");
        }
        for(c=1;c<=r;c++){
            printf("%d ",c);
        }
        
        printf("\n");
    }    
}