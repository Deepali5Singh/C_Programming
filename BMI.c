//Write a program to calculate the BMI of a person
// If person weight is more than 300Kg AND less than 30 kg out of range
//height  1.0 to 2.5
//then calculate the BMI = weight / height * height
#include<stdio.h>
int main () {
   float Weight;
   printf("Enter the weight");
   scanf("%f",&Weight);
    float height;
    float BMI = 0.0;
 printf("Enter the height");
 scanf("%f",&height);
 if (Weight>=30.0 && Weight<=300.0){
    if(height>= 1.0 && height<=2.0){
      BMI = Weight / (height * height);
      printf(".2%f",BMI);
    }
 }
 else {
   printf("out of the range");
 }
}