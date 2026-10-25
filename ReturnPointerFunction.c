#include<stdio.h>

int* ReturnToPointer();

int main () {
    int a[] = {1,2,3,4,5}, *p;
    p = ReturnToPointer(a);
    printf("%d",p);
  
}

int* ReturnToPointer(int a [])
{
a = a+2;
return a;
}