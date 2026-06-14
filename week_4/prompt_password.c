/* 
  AUthor: Ian Kabaka. 
  Admission number:BCS-03-0068/2026
  Date June 14 2026 
  
*/
#include <stdio.h>
#include <string.h> // Required for strcmp

int main(){

    // 4 characters + 1 for the null terminator '\0'
    char userinput[5]; 
    
    printf("Enter the correct password to log in, it is a four digit password: ");
    do{
        // %4s limits input to 4 chars to prevent buffer overflow
        scanf("%4s", userinput); 

        // strcmp returns 0 if the strings match perfectly
        if (strcmp(userinput, "1234") != 0){
            printf("you entered, %s\n", userinput);
            printf("Wrong password keep trying: ");
        } else {
            printf("you got the password!!\n");
        }
        
    } while(strcmp(userinput, "1234") != 0); // Loop continues as long as they DON'T match

    return 0;
}