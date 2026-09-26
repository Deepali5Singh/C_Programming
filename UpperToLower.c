#include<stdio.h>
#include<string.h>
int main () {
    char name [30] = "JeNny";
    for (int i = 0; name != NULL; i++){
        if(name[i]>= 'A' && name[i]<= 'Z'){
            name[i + 32] = name[i];
        }
    }
    printf("%s",name);
}