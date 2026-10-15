#include<stdio.h>
int mul (int, int);
int main () {
    int a;
    int b;
    int m;
    scanf("%d%d",&a,&b);
    m = mul(a,b);
    printf("%d",m);
}
int mul (int x, int y){
  
    return x * y;
}