#include<stdio.h>
int main(){
    char option;
    int a,b;
    scanf("%d%d%c",&a,&b,&option);
    switch (option){
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        if(b==0){
            printf("error");
        }
        else
            printf("%d",a/b);
        break;
    default:
        printf("error");
    }
}