#include <stdio.h> 

int main() { 

  // This program calculates the electricity bill for 5 customers. 

  char customer_name[5][25]; // Array to store the customer names. 

  int customer_eb_number[5]; // Array to store the customer EB numbers. 

  float customer_units_consumed[5]; // Array to store the customer units consumed. 

  float customer_bill[5]; // Array to store the customer bills. 

  // Iterate through the 5 customers. 

  for (int i = 0; i < 5; i++) { 

    // Get the customer name, EB number, and units consumed. 

    printf("Enter the name of the customer: "); 

    scanf("%s", customer_name[i]); 

    printf("Enter the EB number of the customer: "); 

    scanf("%d", &customer_eb_number[i]); 

    printf("Enter the units consumed by the customer: "); 

    scanf("%f", &customer_units_consumed[i]); 

    // Calculate the customer bill. 

    customer_bill[i] = 0; 

    if (customer_units_consumed[i] <= 100) { 

      customer_bill[i] = customer_units_consumed[i] * 0; 

    } else if (customer_units_consumed[i] <= 400) { 

      customer_bill[i] = 100 * 0 + (customer_units_consumed[i] - 100) * 2.25; 

    } else if (customer_units_consumed[i] <= 500) { 

      customer_bill[i] = 100 * 0 + 300 * 2.25 + (customer_units_consumed[i] - 400) * 4.50; 

    } else if (customer_units_consumed[i] <= 600) { 

      customer_bill[i] = 100 * 0 + 300 * 2.25 + 100 * 4.50 + (customer_units_consumed[i] - 500) * 6; 

    } else { 

      customer_bill[i] = 100 * 0 + 300 * 2.25 + 100 * 4.50 + 100 * 6 + (customer_units_consumed[i] - 600) * 8; 

    } 

  } 

  // Print the customer details and bills. 

  for (int i = 0; i < 5; i++) { 

    printf("Customer name: %s\n", customer_name[i]); 

    printf("EB number: %d\n", customer_eb_number[i]); 

    printf("Units consumed: %.3f\n", customer_units_consumed[i]); 

    printf("Bill: INR %.2f\n", customer_bill[i]); 

  } 

  return 0; 

} 
