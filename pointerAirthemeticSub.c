#include<stdio.h>

int main () {
    int a [5] = {1, 10, 5, 52, 8};
    int * p = &a [2];
    int * q = &a [4];
    printf("%d\n",*p);
    printf("%d\n",p);
     printf("%d\n",*q);
    printf("%d\n",q);

    int d = p - q;
    printf("%d\n",d);
    q = q - 1;
     printf("%d\n",q);
p = p -1 ;
printf("%d\n",p);
}