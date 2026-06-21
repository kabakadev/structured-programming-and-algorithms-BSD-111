#include <stdio.h>

/* 
  AUthor: Ian Kabaka. 
  Admission number:BCS-03-0068/2026
  Date June 21 2026 
  
*/

int calculateFare(int distance_travelled){
    int fare_rate = 50;

    int total_fare = fare_rate * distance_travelled;
    printf("Your total fare is %d\n", total_fare);

    return total_fare;
}

int main(){
    int distance_travelled;

    printf("Enter the distance travelled: ");
    scanf("%d", &distance_travelled);
    calculateFare(distance_travelled);
}