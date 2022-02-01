#include <stdio.h> 

int main(){
    int income;
    printf("Enter your yearly income :- ");
    scanf("%d",&income);
    float tax = 0;

    if (income >=250000  && income <=500000 ){
        tax = 0.5 * (income - 250000);
    }

    else if (income >=500000  && income <=1000000 ){
        tax = 0.10 * (income - 500000);
    }

    else if (income >=1000000  ){
        tax = 0.30 * (income - 1000000);
    }

    printf("Hello Mr. Raju your income tax  %.2f will be paid on 28th of this month ", tax);
    return 0;
}