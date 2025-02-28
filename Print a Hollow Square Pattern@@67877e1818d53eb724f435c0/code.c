#include<stdio.h>
int main() {
    int r,c,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
            if(c==2||c==3)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}