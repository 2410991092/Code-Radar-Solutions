#include<stdio.h>
int main() {
    int r,c,n,s;
    scanf("%d",&n);
    for(r=n;r>=1;r--){
        for(s=1;s<=4-r;s++)
            printf("  ");
        for(c=1;c<=r;c++){
            printf("* ");
        }
        printf("\n");
    }
}