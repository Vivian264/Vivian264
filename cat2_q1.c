#include <stdio.h>

int main() {
    
    char name[25] = "John Doe";
    int id = 12345;
    char department[20] = "Human Resources";
    float salary = 55000.50;
    char email[50] = "john.doe@company.com";

    
    printf("Employee Details:\n");
    printf("Name: %s\n", name);
    printf("ID: %d\n", id);
    printf("Department: %s\n", department);
    printf("Salary: %.2f\n", salary);
    printf("Email: %s\n", email);

    return 0;
}