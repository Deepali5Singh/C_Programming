#include<stdio.h>
int fun1(int n){
    if(n<=1){
        return n;
    }
    else{
        printf("%d",n);
        fun1(n/2);
        
    }
}

int main () {
   int a = fun1(10);
    printf("%d",a);
}