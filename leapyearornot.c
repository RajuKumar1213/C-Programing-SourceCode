#include <stdio.h> 

int main(){
    int year;
    printf("Enter the year:-");
    scanf("%d",&year);

    if(year%4){
        printf("The year entered be the user is the leap year");
    }
    else{
        printf("The year entered be the user is not a leap year");
    }
    return 0;
}