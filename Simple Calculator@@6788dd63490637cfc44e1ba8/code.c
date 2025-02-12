#include<stdio.h>
int main(){
    char option,sum,sub,mul,div;
    int a,b,c;
    scanf("%c",&option);
    switch (option){
    case '+':
        scanf("%d%d",&a,&b);
        printf("%d",a+b);
        break;
    case '-':
        scanf("%d%d",&a,&b);
        printf("%d",a-b);
        break;
    case '*':
        scanf("%d%d",&a,&b);
        printf("%d",a*b);
        break;
    case '/':
        scanf("%d%d",&a,&b);
        printf("%d",a/b);
        break;
    default:
        printf("Wrong choice");
    }
}