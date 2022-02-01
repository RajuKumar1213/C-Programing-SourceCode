#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
} Raju, Rajan, Rahul;
// struct student Raju, Rajan, Rahul; // This is the global variable

void printName()
{
    printf("Raju's name is %s\n", Raju.name);
}
int main()
{
    // struct student Raju, Rajan, Rahul; // This is the local variable of main function
    Raju.id = 1;
    Rajan.id = 2;
    Rahul.id = 3;

    Raju.marks = 823;
    Rajan.marks = 232;
    Rahul.marks = 900;
    strcpy(Raju.name, "Raju is the best boy of his college");

    Raju.fav_char = 'p';
    Rajan.fav_char = 'p';
    Rahul.fav_char = 'p';
    printName(Raju.name);
    // printf("Raju got %d Marks \n", Raju.marks);
    // printf("%s \n", Raju.name);
    return 0;
}