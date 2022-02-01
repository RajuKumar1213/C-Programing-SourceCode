#include <stdio.h> 
void printStr(char str[]){
    int i=0;
    while (str[i]!='\0'){
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
    
}
int main(){
    // char  str[] = {'R', 'a', 'j', 'u','\0'};//If we will not use '\0' then it will return garbage value
    // char str[] = "Raju";

    char str[34];`
    printf("Using gets\n");
    gets(str);
    printf("Using printStr function the result is :%s \n", str);
    printStr(str);
    puts(str);
    return 0;
}