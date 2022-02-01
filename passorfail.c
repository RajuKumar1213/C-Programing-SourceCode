#include <stdio.h> 

int main(){
   int maths,physics,chemestry;
   float total;
   printf("Enter the marks of Maths :- ");
   scanf("%d",&maths);

   printf("Enter the marks of Physics :- ");
   scanf("%d",&physics);

   printf("Enter the marks of Chemestry :- ");
   scanf("%d",&chemestry);

    total = (maths + physics + chemestry)/3;

    if(total<=40 || physics<=33 ||maths <= 33 || chemestry <= 33){
        printf("Hello ! Your percentages is %0.4f and you are fail ",total);
    }
    else{
        printf("Hlw ! Your percentages is %0.4f and you are pass",total);
    }

    return 0;
}