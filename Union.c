#include<stdio.h>
union abc
{
  int rollNo;
    /* data */
    char section;
   float marks ;
   int class;
};
 void main() {
    union abc U;
    union abc * ptr = &U;
    U.section = 'a';
    U.class =4;
    U.rollNo =1;
    U.marks = 99.2;
    printf("%s",ptr->section);
     printf("%d",ptr->class);
      printf("%d",ptr->rollNo);
       printf("%f",ptr->marks);
 }