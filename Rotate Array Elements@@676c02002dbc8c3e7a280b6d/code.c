#include<stdio.h>
void rev(int a[],int start,int end){
    while(start < end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
void rotatearray(int a[],int n;int k){
    k=k%n;
    rev(a,0,n-1);
    rev(a,0,k-1);
    rev(a,k,n-1);
}