#include<stdio.h>
int main(){
    char option,sum,sub,mul,div;
    int a,b,c;
    printf("Ent opt(+,-,*,/): ");
    scanf("%c",&option);

    switch (option)
    {
    case '+':
        printf("Ent a and b: ");
        scanf("%d%d",&a,&b);
        printf("Sum=%d",a+b);
        break;
    case '-':
        printf("Ent a and b: ");
        scanf("%d%d",&a,&b);
        printf("sub=%d",a-b);
        break;
    case '*':
        printf("Ent a and b: ");
        scanf("%d%d",&a,&b);
        printf("Mul=%d",a*b);
        break;
    case '/':
        printf("Ent a and b: ");
        scanf("%d%d",&a,&b);
        printf("Div=%d",a/b);
        break;
    default:
        printf("Wrong choice");
    }
}