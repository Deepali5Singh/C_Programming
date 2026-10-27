//count the consonant 
// count the variable 
// count the digit
#include<stdio.h>
int main () {
   int  Vowvel = 0;
   int consonant = 0;
   int digit = 0;
   char s[20];
   scanf("%s",s);

   for (int i = 0; i<20; i++){
    if(s[i]=='a' || s[i]=='e'|| s[i]=='i' ||s[i]=='o'||s[i]=='u'){
        Vowvel++;
    }
    else if( s[i] >='0' && s[i]<='9'){
       digit++;
    }
    else if (s[i]>= 'A' && s[i]<='z') {
        consonant++;
    }
   }
   printf("%d%d%d",Vowvel,digit,consonant );
} // no spaces allowed in this program