#include<stdio.h>
int main(){
    int r,c,s,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(s=1;s<=n-r;s++){
            printf("  ");
        }
        for(c=1;c<=r;c++){
            printf("*");
        }
        printf("\n");
    }
}