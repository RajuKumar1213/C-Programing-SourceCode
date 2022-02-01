// /*
// Question :- 
// You manage a travel agency and you want to your n drivers to input their following details:
// 1. Name
// 2. Driving lecense No
// 3. Route
// 4. Kms
// Your program should be able to take n as input and your drives will start inputting thier details one by one.

// Your pragram should print datails of the drivers in a beautiful fashion.
// Use structure
// */


// #include <stdio.h> 
// #include <string.h> 

// struct drivers
// {
//     char name[23];
//     char route[23];
//     int drivingLisenceNumber;
//     int Kms;
    
// };

// int main(){
//     // strcpy(driver.name , "Raju kumar");
//     // strcpy(driver.route , "Dto To Ranchi");
//     // driver.drivingLisenceNumber = 124578;
//     // driver.Kms = 100;
//     printf("Enter the detail of three dirivers \n");
//     // gets(first.name);
//     // gets

//     for (int i = 0; i < 2; i++)
//     {
//     struct drivers i;
//         printf("Enter the name of The Driver :-\n");
//         gets(i.name);
//         printf("Enter the Route of The Driver :-\n");
//         gets(i.route);
//         printf("Enter Driving lisence of the Driver :-\n");
//         scanf("%d", &i.drivingLisenceNumber);

//         printf("Enter Kms of the Driver :-\n");
//         scanf("%d", &i.Kms);
//     }
//     for (int i = 0; i < 2; i++)
//     {
//     struct drivers i;
//     // printf("The name of the driver is %s\n", i.name);
//     puts(i.name);
//     // printf("The route of the driver is %s\n", i.route);
//     puts(i.route);
//     printf("The Driving lisence of the driver is %d\n",i.drivingLisenceNumber);
//     printf("The drivers Kms is %d\n",i.Kms);
//     }
    

//     // printf("The name  of the deriver is %s \n",driver.name );;
    
//     return 0;
// }                 

#include <stdio.h> 
typedef struct driver{
    char name[23];
    char dlNo[23];
    char route[34];
    int kms;
}dr;
int main(){
    dr d1 , d2, d3;
    printf("******Fill the detail of the first driver******:- \n");
    printf("Enter the name :-\n");
    scanf("%s", &d1.name);

    printf("Enter the Dl number :- \n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route :- \n");
    scanf("%s", &d1.route);

    printf("Enter the Kms:- \n");
    scanf("%d", &d1.kms);

    printf("******Fill the detail of the second driver******:- \n");
    printf("Enter the name :-\n");
    scanf("%s", &d2.name);

    printf("Enter the Dl number :- \n");
    scanf("%s", &d2.dlNo);

    printf("Enter the route :- \n");
    scanf("%s", &d2.route);

    printf("Enter the Kms:- \n");
    scanf("%d", &d2.kms);

    printf("******Fill the detail of the Third driver******:- \n");
    printf("Enter the name :-\n");
    scanf("%s", &d3.name);

    printf("Enter the Dl number :- \n");
    scanf("%s", &d3.dlNo);

    printf("Enter the route :- \n");
    scanf("%s", &d3.route);

    printf("Enter the Kms:- \n");
    scanf("%d", &d3.kms);

    printf("*******Printing the detail of the drivers *******\n");
    printf("Details of the first driver:-\n");
    printf("Name is :-%s\n", d1.name);
    printf("Dl number is:- %s\n", d1.dlNo);
    printf("Route is:- %s \n", d1.route);
    printf("Kms is:- %d\n", d1.kms);

     printf("Details of the Second driver:-\n");
    printf("Name is :-%s\n", d2.name);
    printf("Dl number is:- %s\n", d2.dlNo);
    printf("Route is:- %s \n", d2.route);
    printf("Kms is:- %d\n", d2.kms);

     printf("Details of the Third driver:-\n");
    printf("Name is :-%s\n", d3.name);
    printf("Dl number is:- %s\n", d3.dlNo);
    printf("Route is:- %s \n", d3.route);
    printf("Kms is:- %d\n", d3.kms);
    return 0;
}