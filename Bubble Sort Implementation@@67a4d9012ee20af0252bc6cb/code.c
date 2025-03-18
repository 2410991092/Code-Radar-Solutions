#include<stdio.h>
int main(){
    int n,c,r,tb;
    printf("ent n: ");
    scanf("%d",&n);

    int A[n];
    for(r=0;r<n;r++){
        printf("ent value at [%d]: ",r);
        scanf("%d",&A[r]);
    }
    for(r=0;r<n;r++){
        for(c=0;c<n-1-r;c++){
            if(A[c]<A[c+1]){
                tb=A[c];
                A[c]=A[c+1];
                A[c+1]=tb;
            }
        }
    }
    for(r=0;r<n;r++){
        printf("%d ",A[r]);
    }
}