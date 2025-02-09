#include <stdio.h>
int main() {
    char aa;
    scanf("%c",aa);
    if((aa>='A') && (aa<='Z'))||((aa>='a') && (aa<='z'))
        printf("Uppercase");
    else
        printf("Not an alphabet");
}