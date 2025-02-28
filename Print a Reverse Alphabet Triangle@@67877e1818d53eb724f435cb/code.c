#include<stdio.h>
int main(){
    int r,c,n,x=1;
    scanf("%d",&n);
    for(r=65;r>=n;r--){
        for(c=65;c<=65+r;c++){
            printf("%c ",c);
        }
        printf("\n");
    }    
}