#include<stdio.h>
char Student (char [], char);
void main (){
    char names[] = {'sushma', 'veenu', 'Seenu','pooja','vidhi'};
    char Section = 'a';
    char info = Student(names,Section);


}

char Student (char names[],char Section){

    for (int i = 0; i<5; i++){
    printf("%s\n",names);
    printf("%s",Section);
    }

}