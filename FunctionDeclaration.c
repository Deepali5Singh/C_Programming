#include<stdio.h>
//  void sum ();
// int main () {
//    sum(5,6);
// } function will be in delema 

// void sum (void);
// void main () {
//     sum(4,5);
// }
int main () {
    void sum (){
        int a,b;
        scanf("%d\t%d",&a,&b);
        int sum = a + b;
        printf("%d",sum);
    }
    sum();
}