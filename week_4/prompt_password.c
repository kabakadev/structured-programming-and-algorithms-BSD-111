/* 
  AUthor: Ian Kabaka. 
  Admission number:BCS-03-0068/2026
  Date June 14 2026 
  
*/
#include <stdio.h>

int main(){

    char userinput[5];
    
    printf("Enter the correct password to log in, it is a four digit password: ");
    do{
        scanf("%s",userinput);

        if (userinput != "1234"){
            printf("Wrong password keep trying: ");
        } else{
            printf("you got the password!!");
        }
    }while(userinput != "1234");
    return 0;
}