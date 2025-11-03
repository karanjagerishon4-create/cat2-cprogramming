/*
Name:Gerishon karanja
reg:PA106/G/29211/25
Description:program to print gross pay,tax&net pay
*/

#include <stdio.h>

int main() {
    float hours_worked, hourly_wage;
    float gross_pay, taxes, net_pay;

    //prompt to enter hours worked and wage
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    // Gross pay calculation
    if (hours_worked > 40) {
        gross_pay = (40 * hourly_wage) + ((hours_worked - 40) * hourly_wage * 1.5);
    } else {
        gross_pay = hours_worked * hourly_wage;
    }

    // Tax calculation
    if (gross_pay <= 600) {
        taxes = 0.15 * gross_pay;
    } else {
        taxes = 0.15 * 600 + 0.20 * (gross_pay - 600);
    }

    // Net pay calculation
    net_pay = gross_pay - taxes;

    //gross pay,tax & net pay
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}