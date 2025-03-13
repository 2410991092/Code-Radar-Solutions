#include<stdio.h>
int main(){
    int n,k;
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&k);
    if(k<0){
        k=k+n;
    }

}