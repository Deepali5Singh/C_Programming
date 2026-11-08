#include<stdio.h>
void  display (int n){
    if(n<1){}
    else{
printf("%d",n);
display(n-1);// function here calling itself
printf("%d",n);
    }
}

void main() {
    int n = 3;
    display(n);
}