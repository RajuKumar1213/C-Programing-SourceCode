#include <stdio.h> 
#include <string.h>

// let make a structure first
// struct student{
//     int id;
//     int marks;
//     char name[34];
//     char fav_icon;
// };

//Waht if we use union 
union student{
    int id;
    int marks;
    char name[34];
    char favicon;
};

int main(){
    // struct student Raju;
    // Raju.id = 1;
    // Raju.marks = 98;
    // Raju.fav_icon = '$';
    // strcpy(Raju.name , "Raju");


    // What will happen if we use union
    union student Raju;
    Raju.id = 1;
    Raju.marks = 98;
    Raju.favicon = 'u';
    strcpy(Raju.name , "Raju");

    printf("The of Id Raju is %d\n", Raju.id);
    printf("The of Marks Raju is %d\n", Raju.marks);
    printf("The of fav-icon Raju is %c\n", Raju.favicon);
    printf("The of Name Raju is %s\n", Raju.name);
    return 0;
}