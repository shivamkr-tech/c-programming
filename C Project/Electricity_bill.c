/**Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill**/

#include <stdio.h>

int main(){
    float units,base_amount=0.0,surcharge,total_amount;
    
    
    // Input of Electricity Consumed.
    printf("Enter the electricity units consumed.\n");
    // scanf("%f",&units);
    if (scanf("%f", &units) != 1 || units < 0){
        printf("Invalid input.\n");
        return 1;
    }
    
    
    // Calculation of base_amount according to units.
    if(units<=50){
        base_amount= (units*0.50);
    }
    
    else if(units<=150){
      base_amount=(50*0.50) + ((units-50)*0.75);
    }
    else if(units<=250){
      base_amount=(50*0.50) + (100*0.75) + ((units-150)*1.20);
    }
    else if(units>250){
      base_amount=(50*0.50) + (100*0.75) + (100*1.20) + ((units-250)*1.50);
    }
    
    // Calculation of surcharge on base_amount.
    
    surcharge=base_amount*0.20;
    
    // Calculation of total_amount.
    
    total_amount= base_amount + surcharge;
    
    printf("The electricity units is consumed is : Rs.%f\n", units);
    printf("The Base Amount is : Rs.%.2f\n",base_amount);
    printf("The surcharge on base amount is: Rs.%.2f\n", surcharge);
    printf("The Total Electricity bill after all charges : Rs. %.2f\n",total_amount);
    
    return 0;
}