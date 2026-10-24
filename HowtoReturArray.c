#include<stdio.h>
char* display ();
int main (){
    char* str = display();
    printf("%s",str);
}

char* display() {
    char* str ="Jenny";
    return str;
}