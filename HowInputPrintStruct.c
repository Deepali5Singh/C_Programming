#include<stdio.h>
int main () {
    struct student {
    int RollNo;
    char name[30];
    float marks;

} ;
   struct student s1 = {1};
    
    printf("%d", s1.RollNo);
    scanf("%f",&s1.marks);
printf("%1.f",s1.marks);
}
 
