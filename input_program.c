#include <stdio.h>
/* AUthor: Ian Kabaka, BCS-03-0068/2026 Date May 14 2026 */
int main(){
    float height;
    double bank_balance;
    long phone_number;
    
    printf("Enter your height in metres(m):");
    scanf("%f", &height);

    printf("Enter your bank balance:");
    scanf("%lf", &bank_balance);

    printf("enter your phone number:");
    scanf("%ld", &phone_number);

    printf("Height: %f\n", height);
    printf("Bank balance amount: %f\n", bank_balance);
    printf("phone number: %ld\n", phone_number);
    
    

}