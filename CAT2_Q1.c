/* Arthor : VALINYALA Ian ABUNGANA

   Date : 6/11/2024

   Reg No. : CT102/G/24472/24

*/

#include<stdio.h>

#include<string.h>

struct employee {

       char name[25];

        int id;

        char department[20];

        float salary;

        char email[20];

};

int main () {

   struct employee employee1;

strcpy(employee1.name, "John Doe");

employee1.id = 12345;

strcpy(employee1.department, "Human Resources");

employee1.salary = 55000.50;

strcpy(employee1.email,  "john.doe@company.com");



printf("The name of the employee : %s", employee1.name);

printf("\nThe id of the employee : %d", employee1.id);

printf("\nThe departrment of the employee : %s", employee1.department);

printf("\nThe salary of the employee : %.2f", employee1.salary);

printf("\nThe email of the employee : %s\n", employee1.email);





return 0;

}