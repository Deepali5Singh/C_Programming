#include<stdio.h>
//how to print value using 
int main () {
    int a = 4;
    int b = 8;
    int * p = &a;
    int * q = &b;
    printf("%d\n",*p);
    printf("%d",*q);

}