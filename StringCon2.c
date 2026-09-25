#include<stdio.h>
#include<string.h>

int main () {
    char n1 [20] = "Shivi";
    char n2 [10] = "Sharma";
    int len1;
    int len2 , i ;
    len1 = strlen(n1);
    len2 = strlen(n2);
    
    for (i = 0; i<=len2; i++){
        n1[len1 + i] = n2[len2];
    }
    printf("%s",n1);
}