#include<stdio.h>
char* modify (char[], char[]);
void main (){
    char str1 = "Jenny";
    char str2 = "Khatri";
modify (str1, str2);
}

char* modify (char str1[], char str2[])
{
    int l = 0;
    int i;
    for (i = 0; str1[i] != '\0'; i++ ){
        l = l + 1;
    }
    printf("%d", l);
}