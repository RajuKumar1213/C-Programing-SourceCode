#include <stdio.h> 

int main(){
    char character;
    printf("Enter the character:-");
    scanf("%c",&character);

    if(character>=97 && character<=122){
        printf("The entered charater is the Lowercase");

    }
    else{
        printf("The entered character is the Uppercase");
    }
    return 0;
}