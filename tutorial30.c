/*In this tutorila we are going to print the star pattern
*
**
***
**** -> Triangular stat pattern

****
***
**
* -> Reversed Triangular star pattern
*/
#include <stdio.h> 

void printStar(int n){
    if(n==1){
        printf("*");
    }
    else{
        for (int i = 0; i < n; i++){
            for (int j = 0; j < i+1; j++)xc    2
            {
                printf("*");
            }
            printf("\n");
            
        }
        
    }
}

int main(){
    int num;
    printf("Enter a number to print star:-");
    scanf("%d", &num);
    printStar(num);
    return 0;
}
