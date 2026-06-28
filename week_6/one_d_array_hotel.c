#include <stdio.h>

int main(){
    int i;
    int sum = 0;
    int average_daily_revenue;

    int simple_weekly_array[7] = {100,500,600,700,100,400,300};
    for (i = 0; i<8;i++){
        sum += simple_weekly_array[i];

    }
    printf("the weekly revenue is: %d\n",sum );

    average_daily_revenue = sum / 7;
    printf(" The average daily revenue is: %d\n",average_daily_revenue);
    return 0;
}