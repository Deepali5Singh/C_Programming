#include<stdio.h>
int main () {
    int a = 4;
    int b = 89;
    int* p = &a;
    int* q = &b;
   // int*r = &q;incompatible pointer type
    int*s; 
    //*s = *r; incompatible pointer type
printf("%d printing address of p \n",&p);// printing address of pointer variable
printf("%d printing address of a variable \n",p); //printing address of a variable
int * t;
printf("%d address of t \n",&t);// address of t
printf("%d stores some garbage value ",t); // stores some garbage value
}