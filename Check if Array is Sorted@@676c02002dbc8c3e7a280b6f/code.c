#include<stdio.h>
void sorted(int a[],int n){
    for(int i=0; i<n-1 ;i++){
        if(a[i]>a[i+1])
            printf("Not Sorted\n");
        else 
            printf("Sorted\n");
        
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sorted(a , n);
}