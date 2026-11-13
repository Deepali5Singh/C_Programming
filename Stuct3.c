#include<stdio.h>
struct student {
int RollNo;
char name[30];
float marks;
}s = {1,"Jenny"};

int main (){
 struct student *ptr = &s;
printf("%d %s %f", (*ptr).RollNo,ptr->name,ptr->marks);
}