
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: JieXiang Xu
 * ID:201956729
 */

 int main( void ) {

    // define and initialise variables for the problem data 

    // calculate the deductions and final take-home salary

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);
      float total_salary = 24000;

      float NI_rate = 8.00;

      float tax_rate = 20.00;

      double NI_contribution;

      double tax_contribution;

      double take_home_salary;

      NI_contribution = total_salary * (NI_rate / 100.00);

      if ((total_salary - NI_contribution - 12500.00) > 0) {
         tax_contribution = (total_salary - NI_contribution - 12500.00) * (tax_rate / 100.0);
    } else {
        tax_contribution = 0.00;
    }

    take_home_salary = total_salary - NI_contribution - tax_contribution;
    
    printf("Salary £%.2f\n",total_salary);

    printf("NI contribution £%.2f\n",NI_contribution);

    printf("Tax contribution £%.2f\n",tax_contribution);

    printf("Take home salary £%.2f\n",take_home_salary);

    return 0;
 }