#include<stdio.h>
int sum (int, int);

int main () {
    int s = 0;
    int (*ptr) (int, int) = &sum;
   s= ptr(1,2);
    printf("%d",s);
}

int sum (int a, int b){
    // printf("%d",a+b);
    return a+ b;
}