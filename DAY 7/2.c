#include <stdio.h>

int main() {
    float base_salary, HRA, DA, TA, gross_salary;

    printf("Enter the base salary: ");
    scanf("%f", &base_salary);

    printf("Enter the HRA percentage: ");
    scanf("%f", &HRA);

    printf("Enter the DA percentage: ");
    scanf("%f", &DA);

    printf("Enter the TA percentage: ");
    scanf("%f", &TA);

    gross_salary = base_salary + HRA + DA + TA;

    printf("Gross Salary: Rs. %.2f\n", gross_salary);

    return 0;
}
