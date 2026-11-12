#include<stdio.h>
struct student {
int rollNo;
char name[30];
float marks;
}s[3];

int main () {
for(int i = 0; i<3;i++){
    scanf("%d %s %f",&s->rollNo,s->name,&s->marks);
}
for(int i = 0; i<3;i++){
    printf("%d %s %f",s->rollNo,s->name,s->marks);
}
}