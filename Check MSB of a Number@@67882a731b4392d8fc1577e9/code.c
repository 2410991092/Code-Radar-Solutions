#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);

    int b=0*80000000;
    if(a&b){
        printf("Set");
    }
    else{
        printf("Not Set")
    }
}