#include<stdio.h>
int peak(int a[], int n){
    if(n==1)
        return a[0];
    if(a[0]>a[1])
        return a[0];
    for(int i=0;i < n-1; i++){
        if(a[i]>a[i=1] && a[i] > a[i+1])
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d\n",peak(a , n));
}