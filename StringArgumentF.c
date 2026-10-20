#include<stdio.h>
char Student (char [], char);
int main (){
    char names[100] = {'sushma', 'veenu', 'Seenu','pooja','vidhi'};
    char Section = 'a';
    char info = Student(names,Section);


}

char Student (char names[],char Section){
int a =5;
    for (int i = 0; i<a; i++){
    printf("%s\n",names);
    printf("%s",Section);
    }

}