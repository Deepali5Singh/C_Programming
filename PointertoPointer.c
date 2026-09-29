#include<stdio.h>
int main () {
    int a = 10;
    int * p = &a;
    int ** q = &p;
    int *** r = &q;
    printf("%d\n",a);
    printf("%d\n",*p );
    printf("%d",***r);

}