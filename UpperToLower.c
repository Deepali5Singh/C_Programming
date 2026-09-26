#include<stdio.h>
#include<string.h>
int main () {
    char name [30] = "JeNny";
    for (int i = 0; name[i] != '\0'; i++){
        if(name[i] >= 'A' && name[i] <= 'Z'){
            name[i] = name[i] + 32;
        }
    }
    printf("%s",name);
}