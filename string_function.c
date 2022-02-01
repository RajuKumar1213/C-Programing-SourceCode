#include <stdio.h> 
#include <string.h>

int main(){
    //In this tutorial we are going lo learn all the function of string
    char s1[] = "Raju";
    char s2[] = "Raju";
    char s3[22];
    //  1. strcat(string1 , string2);//It cancatinates the two string
    // puts(strcat(s1 , s2));//We use puts instead of printf

    //2. strlen() ---> it takes a sting and return the length of given string

    printf("The length of s1 is %d\n", strlen(s1));
    printf("The length of s2 is %d\n", strlen(s2));

    // 3. strrev(s1) --->it takes a string and reverse it
    // printf("the reversed string s1 is :\n");
    // puts(strrev(s1));

    //4. strcpy(s3, s2); It takes first new string and second string having some text then second will be copyied in the first string

    strcpy(s3 , strcat(s1, s2));
    puts(s3);

    // 5. strcmp(s1, s2);---> it takes two string and if catracter is same then it return some number in possitive as well as negative

    printf("The strcmp for s1 and s2 return %d \n", strcmp(s1 , s2));
    return 0;
}