#include<stdio.h>
#include<string.h>
int main () {
char name [30] = "Jenny"; 
int len, i ;
len = strlen(name);
char c;
for (i = 0; i = len/2; i++)
{
    name[i] = name[len - i -1];
     name[len - i -1] = c;
}
puts(name);
}
