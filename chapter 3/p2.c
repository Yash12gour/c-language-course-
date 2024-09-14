#include <stdio.h>

int main() {
    int income, tax;

    // Input income amount from the user
    printf("Enter your income: ");
    scanf("%d", &income);

    // Determine the applicable tax slab
    if (income >= 250000 && income <= 500000) {
      tax = income * 0.05; // 5% tax
    } else if (income > 500000 && income <= 100000) {
        tax = income * 0.20; // 20% tax
    } else if (income > 1000000) {
        tax = income * 0.30; // 30% tax
    } else {
        tax = 0.0; // No tax below 2.5 lakhs
    }

    // Display the calculated tax
    printf("Income tax: %d \n", tax);

    return 0;
}
////
