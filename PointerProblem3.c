#include<stdio.h>
int main () {
     const int a = 3;
    const int *ptr = &a;
printf("%d", *ptr);
//it will give error 
// printf("%d", ptr++);
// we can not change the address of pointer after using const
}