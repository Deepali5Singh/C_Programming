#include<stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    printf("The address of a is : %d\n", p);
    p = p + 1;
    printf("The increased by 1 in p address  %d \n",p);
    printf("After increasing the 1 the value is%d\n ",*p);
    //how to use pointer in array
    int b [5] = {1,2,3,4,5};
    int *q = &b[2];
     printf("The address of b is : %d\n", q);
     q = q + 1;
     printf("The increased by 1 in q address %d\n ",q);
     printf("After increasing the 1 the value is %d",*q);
}