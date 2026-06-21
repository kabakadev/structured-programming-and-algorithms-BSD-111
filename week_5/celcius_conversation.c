#include <stdio.h>

/* 
  AUthor: Ian Kabaka. 
  Admission number:BCS-03-0068/2026
  Date June 21 2026 
  
*/

float convertToCelsius(float temperature_fahr){

    float celsius = 0.0;

    celsius = (temperature_fahr - 32) * 5.0/9.0;

    return celsius;

}

int main(){
    float temperature_fahr;

    printf("enter the temperature in fahranheit: ");
    scanf("%f", &temperature_fahr);

    float final_temp = convertToCelsius(temperature_fahr);

    printf("The termperature in celsius is %f\n", final_temp);
    return 0;
}