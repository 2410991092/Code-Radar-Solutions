#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    for(c=1;c<=10;c++){
        printf("\n%d x  %d = %d",n,c,n*c);
    }
}