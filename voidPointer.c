#include<stdio.h>
int main () {
    //
    int a;// declaration
    a = 5;//initalization
    void *vp;// initalization;
    vp = &a;
    printf("%d\n",vp);
    // printf("%d",*vp);This is not allowed in void pointer
printf("%d",vp++);
}