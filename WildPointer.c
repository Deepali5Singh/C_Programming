#include<stdio.h>
#include<stdlib.h>

int main () {
    int * ptr; // wild pointer 
    printf("%d\n",ptr);
    printf("%d", *ptr);
}