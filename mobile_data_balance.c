/* 
  AUthor: Ian Kabaka. 
  Admission number:BCS-03-0068/2026
  Date May 25 2026 
  
*/
#include <stdio.h>

int main(){
    printf("option 1: bundle 100mb: cost(kes) 50\n");
    printf("option 2: bundle 500mb: cost(kes) 200\n");
    printf("option 3: bundle 1gb: cost(kes) 350\n");
    printf("option 4: bundle 2gb: cost(kes) 600\n");

    printf("\nchoose between option 1 - 4: ");

    int user_number;

    scanf("%d",&user_number);

    switch(user_number){
        case 1:
          printf("you chose 100mb, that costs 50Ksh\n");
          break;
        case 2:
          printf("you chose 500mb, that costs 200Ksh\n");
          break;
        case 3:
          printf("you chose 1gb, that costs 350Ksh\n");
          break;
        case 4:
          printf("you chose 2gb, that costs 600Ksh\n");
          break;
        default:
          printf("the choice made is invalid\n");
          break;
        
    }

    return 0;
}