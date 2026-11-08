#include<stdio.h>
int sum (int a){
    if(sum > 0){
        return a + sum(a-1);
        printf("%d", a);
    }
    else {
    return 0;
}
}
int main () {
   
sum(3);
}

