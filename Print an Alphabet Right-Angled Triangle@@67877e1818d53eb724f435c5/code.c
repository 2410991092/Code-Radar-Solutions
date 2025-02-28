#include<stdio.h>
int main(){
    int r,c,n;
    scanf("%d",&n);
    for(r=65;r<=n;r++){
        for(c=65;c<=r;c++){
            printf("%c ",c);
        }
        printf("\n");
    }    
}