#include <stdio.h> 

int main(){
    int num1 , num2 ,num3 ,num4;
    printf("Enter 4 Numbers :-\n");
    scanf("%d %d %d %d",&num1 , &num2 , &num3 , &num4);

    if(num1>num2 && num1>num3 && num1>num4){
        printf("%d is the greatest number" , num1);
    }
    else if(num2>num1 && num2>num3 && num2>num4){
        printf("%d is the greatest number",num2);
    }
    else if(num3>num1 && num3>num2 && num3>num4){
        printf("%d number is the greatest number",num3);
    }
    else {
        printf("%d number is the greatest number",num4);
    }

    return 0;
}