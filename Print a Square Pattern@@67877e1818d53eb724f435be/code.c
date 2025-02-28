#include<stdio.h>
int main() {
    int r,c,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        printf("\n* ");
        for(c=1;c<=n-r;c++)
            printf("* ");
    }
}