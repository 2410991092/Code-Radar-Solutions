#include<stdio.h>
int main() {
    int r,c,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
            if((r==2||r==3) && (r==2 || r==2) ){
                if(c==2||c==3)
                    printf(" ");
                else
                    printf("*");
            }
            else
            printf("*");
        }
        printf("\n");
    }
}