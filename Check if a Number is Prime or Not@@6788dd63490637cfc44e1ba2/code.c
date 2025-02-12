#include<stdio.h>
int main(){
    int n,a,jasoos;
    scanf("%d",&n);
    for(a=2;a<n;a++){
        if(n%a==0){
            jasoos=0;
            break;
        }
    }
    if(jasoos==1)
        printf("Prime");
    else
        printf("Not Prime");
}