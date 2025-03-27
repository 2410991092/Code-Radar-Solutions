#include<stdio.h
void find(int a[],int n, int *min, int *max){
    *min = *max = a[0];
    for(int i=1; i<n ;i++){
        if(a[i]< *min){
            *min = a[i];
        }
        if(a[i] > *max)
            *max = a[i];
    } 
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min,max;
    find(a, n,&min, &max);
    printf("%d %d\n",min,max);
}