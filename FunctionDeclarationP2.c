#include<stdio.h>
int sum (int a, int b){ // pass parameters in a function
    int Sum = a + b;
    printf("%d",Sum);
}
void main () {
    sum(4,5);// call function
}