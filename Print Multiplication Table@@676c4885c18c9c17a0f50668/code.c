#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    for(c=1;c<=10;c++){
        printf("%d x %d = %d\n",n,c,n*c);
    }
}