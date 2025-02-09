#include <stdio.h>
int main() {
    char aa;
    scanf("%c",aa);
    if((aa>='A' && aa<='Z')||(aa>='a'&& aa<='z')){
        if(aa>='A') &&(aa<='Z')
            printf("Uppercase");
        
        else
            printf("Lowercase");
        
    }else{
        printf("Not an alphabet");
    }
    
}