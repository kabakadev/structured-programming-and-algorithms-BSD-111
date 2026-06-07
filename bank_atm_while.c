#include <stdio.h>

int main(){
    int user_input;
    int account_balance = 100000;


    while (account_balance > 0){
        printf("Enter amount to withdraw your balance is %d: ",account_balance);
        scanf("%d",&user_input);
        account_balance -= user_input; 
    }
    return 0;
}