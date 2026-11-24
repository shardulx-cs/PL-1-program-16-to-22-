#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main(void) {
    struct Employee emp[50];
    int n, i;

    printf("Enter number of employees (1-50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Invalid number of employees.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);
        printf("Name: ");
        scanf("%49s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n--- Employee Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID     : %d\n", emp[i].empId);
        printf("Name   : %s\n", emp[i].name);
        printf("Salary : %.2f\n", emp[i].salary);
    }

    return 0;
}
