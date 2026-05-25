#include <stdio.h>

int main(){
    int customer_age;
    double customer_income;

    printf("What is your age?:\n");
    scanf("%d", &customer_age);

    printf("What is your annual income?:\n");
    scanf("%lf", &customer_income);

    if (customer_age >= 21 && customer_income >= 21000){
        printf("Congrats you do qualify for a loan\n");
    }
    else{
        printf("Unfortunately we are unable to offer you a loan at this time\n");
    }
    return 0;
}