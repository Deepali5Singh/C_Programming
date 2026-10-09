#include<stdio.h>
#include<stdlib.h>

int main () {
    int * ptr; // wild pointer showing some garbage value
    printf("%d\n",ptr);
    printf("%d", *ptr);
}