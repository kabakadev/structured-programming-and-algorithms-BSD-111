#include <stdio.h>

/* 
  AUthor: Ian Kabaka. 
  Admission number:BCS-03-0068/2026
  Date June 28 2026 
  
*/

int main(){
    int i;
    int sum = 0;
    int average_daily_revenue;

    int revenue[7] = {100,500,600,700,100,400,300};
    for (i = 0; i<8;i++){
        sum += revenue[i];

    }
    printf("the weekly revenue is: %d\n",sum );

    average_daily_revenue = sum / 7;
    printf(" The average daily revenue is: %d\n",average_daily_revenue);
    return 0;
}