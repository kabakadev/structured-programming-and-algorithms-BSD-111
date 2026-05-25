#include <stdio.h>

int main(){
    int customer_age;
    double customer_income;

    printf("What is your age?\n ");
    scanf("%d", customer_age);

    printf("What is your monthly income?");
    scanf("%lf", customer_income);
    return 0;
}