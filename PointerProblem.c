#include<stdio.h>
int main () {
    int arr [5] = {0, 34, 78, 11,2};
    int * p = &arr[0];
    int * q = &arr[2];
    printf("The address of p %d\n",p);
    printf("The value store by p %d\n The value increased in address of q %d\n %d",(*p),q++,p++);
}