#include <stdio.h?
struct Employee {
    int id;             
    char name[50];      
    float salary;       
};
int main() {
    int num_employees;
    float total_salary = 0.0, average_salary;
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);
    struct Employee employees[num_employees];
    for (int i = 0; i < num_employees; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter Employee Name: ");
        scanf("%s", employees[i].name);
        printf("Enter Employee Salary: ");
        scanf("%f", &employees[i].salary);
        total_salary += employees[i].salary;
    }
    average_salary = total_salary / num_employees;
    printf("\nAverage Salary of Employees: %.2f\n", average_salary);
return 0;
}
