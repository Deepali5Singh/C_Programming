#include<stdio.h>
#include<string.h>

int main () {
    char name1 [30] = "Jayanti";
    char name2 [7] = "khatri";
    strcat(name1, name2);
    printf("%s",name1);
    //another way;
    char n1 [30] = "Meera";
    char n2 [8] = "Chanu";
    printf("\n");
    strncat(n1,n2,3);
    printf("%s",n1);
}