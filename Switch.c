#include<stdio.h>
int main () {
   int CarName;
    scanf("%d",&CarName);
   char  CarWash [5];
    scanf("%s",CarWash);
    switch(CarName){
        case 1: 
        switch (CarWash[5])
        {   
        case 'N':
            printf("For the normal car wash price is 500");
            break;
        
        case 'P':
            printf("For the normal car wash price is 1000");
            break;
    }
    case 2:
     switch (CarWash[5])
        {   
        case 'N':
            printf("For the normal car wash price is 700");
            break;
        
        case 'P':
            printf("For the normal car wash price is 1200");
            break;
    }
}
}