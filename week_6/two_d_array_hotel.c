#include <stdio.h>

/* 
  AUthor: Ian Kabaka. 
  Admission number:BCS-03-0068/2026
  Date June 28 2026 
  
*/

int main(){
    int a;
    int i;
    int j;
    
    int occupancy[5][10]={1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1};
    int chain[3][5][10] = {1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1};
    for (i = 0; i<5;i++){
        int vacant = 0;
        int occupied = 0;
        for (j=0; j<10;j++){
            if (occupancy[i][j] == 0){
                vacant++;
            }else {
                occupied ++;
            }
        }
        printf("the total vacant for floor %d is %d\n", i,vacant);
        printf("the total occupied for floor %d is %d\n", i,occupied);
    }
    
    int branch = 0;
    for (int o = 0; o<3; o++){
        branch++;
        for (i = 0; i<5;i++){
            int vacant = 0;
            int occupied = 0;
           for (j=0; j<10;j++){
              if (chain[o][i][j] == 0){
                  vacant++;
              }else {
                  occupied ++;
            }
        }
        printf("the total vacant for floor %d is %d in branch %d\n", i,vacant,branch);
        printf("the total occupied for floor %d is %d in branch %d\n", i,occupied,branch);
    }
    
}
return 0;

}