#include<stdio.h>
int sum (int a, int b){
    return a+b;
}
int sub (int a, int b){
    return a-b;
}
int mul (int a, int b){
    return a*b;
}
int div (int a, int b){
    return a/b;
}

int main ()  {
    int c;
    int *ftr[10];
    int a ;
    int b; 
    int (*fptr[10])(int, int) = {sum, sub, mul, div};
    printf("Enter choice \n");
    scanf("%d",&c);
    printf("\n Enter a and b");
    scanf("%d%d",a,b);
    // int (*fptr [c])(a, b);

}
