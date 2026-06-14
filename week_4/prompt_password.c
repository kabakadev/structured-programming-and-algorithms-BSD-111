/* 
  AUthor: Ian Kabaka. 
  Admission number:BCS-03-0068/2026
  Date June 14 2026 
  
*/
#include <stdio.h>

int main(){

    int userinput;

    
    printf("Enter the correct password to log in, it is a four digit password: ");
    do{
        scanf("%d",&userinput);

        if (userinput != 1234){
            printf("you entered, %d\n", userinput);
            printf("Wrong password keep trying: ");
        } else{
            printf("you got the password!!\n");
        }
    }while(userinput != 1234);
    return 0;
}