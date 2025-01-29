#include <stdio.h>
int main() {
    char str1[20];
    int a; 
    char str2[20];
    scanf("%s %d\n%s",&str1,&a,&str2);
    printf("Name: %s ",str1);
    printf("\nAge: %d",a)
    printf("\nHobby: %s",str2);
}