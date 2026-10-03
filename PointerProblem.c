#include<stdio.h>
int main () {
    int arr [5] = {0, 34, 78, 11,2};
    int * p = &arr[0];
    int * q = &arr[2];
    printf("%d\n%d\n%d",(*p),q++,p++);
}