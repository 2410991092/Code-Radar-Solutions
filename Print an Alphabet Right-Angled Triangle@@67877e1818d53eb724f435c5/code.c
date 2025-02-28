#include<stdio.h>
int main(){
    int r,c,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=65;c<=65+r;c++){
            printf("%c ",c);
        }
        printf("\n");
    }    
}