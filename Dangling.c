#include<stdio.h>
#include<stdlib.h>
int main () {
    int a = 5;
    int * ptr = (int *)malloc(sizeof(int));
    printf("%d\n",ptr);
    free(ptr);
    printf("%d",ptr);
}