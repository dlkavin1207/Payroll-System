#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of employees: ");
    scanf("%d", &n);

    int empId[n];
    char name[n][50];
    float basic[n], hra[n], da[n], pf[n], net[n];

    for(i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Employee Name: ");
        scanf("%s", name[i]);

        printf("Enter Basic Salary: ");
        scanf("%f", &basic[i]);

        hra[i] = basic[i] * 0.20;   
        da[i]  = basic[i] * 0.10;  
        pf[i]  = basic[i] * 0.05;   
        
        net[i] = basic[i] + hra[i] + da[i] - pf[i];
    }

    printf("\n\n========= PAYROLL DETAILS =========\n");

    for(i = 0; i < n; i++) {
        printf("\nEmployee ID: %d", empId[i]);
        printf("\nName: %s", name[i]);
        printf("\nBasic Salary: %.2f", basic[i]);
        printf("\nHRA: %.2f", hra[i]);
        printf("\nDA: %.2f", da[i]);
        printf("\nPF (Deduction): %.2f", pf[i]);
        printf("\nNet Salary: %.2f", net[i]);
        printf("\n-----------------------------------\n");
    }

    return 0;
}