#include<stdio.h>
int avg (int [], int);
int main (){
    int marks[5] = {34, 45, 90, 60, 56};
    int average = avg(marks, average);
    printf("%d",average);
}

int avg (int marks1[],int average){
   int  sum, a =5;
    for (int i = 0; i<a; i++){
    sum = marks1[i] + sum;
    }
    average = sum / a;
    return average;
}