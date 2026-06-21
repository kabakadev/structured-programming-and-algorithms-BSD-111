#include <stdio.h>

/* 
  AUthor: Ian Kabaka. 
  Admission number:BCS-03-0068/2026
  Date June 21 2026 
  
*/

int calculateElectricBill(int number_of_units) {
    int total_bill = 0;
    
      if (number_of_units > 200){
            total_bill = (100 * 10) + (100 * 15) + ((number_of_units - 200) * 20);
        }  else if (number_of_units <= 200 && number_of_units > 100){
            total_bill = (100 * 10) + ((number_of_units - 100) * 15);
        } else{
            total_bill = number_of_units * 10;
        }

    printf("The total bill is: %d \n", total_bill);
    
    return total_bill;
}

int main(){
    int number_of_units = 0;

    printf("enter the number of units consumed: ");
    scanf("%d", &number_of_units);
    calculateElectricBill(number_of_units);

    
      

    return 0;

}

