#include <stdio.h>

int main(){
    double water_units;
    int low_end_units = 20;
    int mid_range_units = 25;
    int high_end_units = 30;
    double total_bill;

    printf("Enter the number of water units consumed: \n");
    scanf("%lf", &water_units);

    if (water_units <= 30){
        total_bill = water_units * low_end_units;
    }
    else if ( water_units >= 31 && water_units <= 60){
        total_bill = water_units * mid_range_units;
    }

    else if (water_units > 60){
        total_bill = water_units * high_end_units;
    }
    else{
        printf("This number is invalid");
    }

    return 0;
}