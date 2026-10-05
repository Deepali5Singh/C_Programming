#include<stdio.h>
#include<string.h>
int main () {
char str [] = "Hey, How are you?";
char * ptr = str;
printf("%c\n",(*ptr));
printf("%c\n",(ptr++ +1));
printf("%c %c %c", *ptr,++ *ptr, --*ptr);
}