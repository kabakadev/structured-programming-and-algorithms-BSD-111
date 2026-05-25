#include <stdio.h>
/* AUthor: Ian Kabaka, 

admission number:BCS-03-0068/2026
 Date May 14 2026 */
int main(){
    float height;
    double bank_balance;
    char phone_number[16];
    
    printf("Enter your height in metres(m):");
    scanf("%f", &height);

    printf("Enter your bank balance:");
    scanf("%lf", &bank_balance);

    printf("enter your phone number:");
    scanf("%s", &phone_number);

    printf("Height: %f\n", height);
    printf("Bank balance amount: %lf\n", bank_balance);
    printf("phone number: %s\n", phone_number);
    
    

}