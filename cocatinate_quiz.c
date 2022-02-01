#include <stdio.h> 
#include <string.h>

int main(){
    char str1[8];
    char str2[8];
    char str3[] = " is the best friend of ";
    char str4[50];
    printf("Enter the name of first friend:-");
    gets(str1);
    printf("Enter the name of second friend :-");
    gets(str2);
    // strcpy(str4,strcat(str1, str3));
    // puts(str4);
    // puts(strcat(str4, str2));
    strcpy(str4, strcat(str1,strcat(str3,str2)));
    puts(str4);
    return 0;
}