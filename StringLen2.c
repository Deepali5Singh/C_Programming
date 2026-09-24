#include<stdio.h>
#include<string.h>
int main (){
    char name [30];
    printf("Enter the name\n");
    gets(name);
    puts(name);
    int i =0;
    int count =0;
    while(name[i] != NULL)
{
    i++;
    count++;
}
printf("%d",count);
}