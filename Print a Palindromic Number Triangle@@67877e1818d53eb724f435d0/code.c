#include<stdio.h>
int main(){
    int r,c,n,s;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            printf("%d",c);
        }
        for(s=r-1;s>=1;s--){
            printf("%d",s);
        }
        printf("\n");
    }    
}