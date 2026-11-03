#include<stdio.h>
int sum (int x){
    if (x == 1){
        return x;
    }
    int s = x + sum(x-1);
    return s;
}
int main () {

    int a = sum (5);
    printf("%d", a);

}