#include<stdio.h>
int main () {
    int a [5] = {1, 0, 56, 48, 32};
    int * p = &a[4];
    int * q = &a[2];
    printf("%d\n", *p++);
    printf("%d",*q--);
    
}