#include <stdio.h>
#include<ctype.h>
int main() {
    char x;
    char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
    scanf("%c",&x);
    if(isalpha(x)){
      int isvowel=0;
      for( int i=0;i<10;i++){
        if(x==vowels[i]){
         isvowel=1;
         break;}
      }
      if(isvowel)
       printf("Vowel");
      else
      printf("Consonent");}
    else if(isdigit(x))
     printf("Digit");
    else
     printf("Special Character");
     return 0;
    }
    