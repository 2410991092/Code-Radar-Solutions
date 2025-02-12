#include<stdio.h>
int main(){
    char option;
    int a,b;
    scanf("%d%d%c",&a,&b,&option);
    switch (option){
    case '+':
        scanf("%d%d",&a,&b);
        break;
    case '-':
        scanf("%d%d",&a,&b);
        break;
    case '*':
        scanf("%d%d",&a,&b);
        break;
    case '/':
        scanf("%d%d",&a,&b);
        break;
    default:
        printf("Wrong choice");
    }
}