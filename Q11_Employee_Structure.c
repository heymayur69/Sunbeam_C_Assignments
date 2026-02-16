#include <stdio.h>
#include <string.h>

struct employee
{
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

void emp_init(struct employee *e){
    printf("Enter First Name :");
    scanf("%s", e->firstName);
    
    printf("Enter Last Name :");
    scanf("%s", e->lastName);

    printf("Enter Monthly Salary :");
    scanf("%lf", &e->monthlySalary);
}

void set_salary(struct employee *e, double salary){
    e->monthlySalary = salary;
}

void emp_display(struct employee *e){
    double yearlySalary = e->monthlySalary * 12;
    printf("Employee Details:\n");
    printf("First Name: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: %.2lf\n", e->monthlySalary);
    printf("Yearly Salary: %.2lf\n", yearlySalary);
}
int main() {
    struct employee e1,e2;
    printf("Employee 1 :\n");
    emp_init(&e1);
    printf("\nEmployee 2 :\n");
    emp_init(&e2);

    printf("\n--- Initial Yearly Salaries ---\n");
    emp_display(&e1);
    emp_display(&e2);

    set_salary(&e1, e1.monthlySalary * 1.10);
    set_salary(&e2, e2.monthlySalary * 1.10);

    printf("\n--- After 10%% Raise ---\n");
    emp_display(&e1);
    emp_display(&e2);
    return 0;
}