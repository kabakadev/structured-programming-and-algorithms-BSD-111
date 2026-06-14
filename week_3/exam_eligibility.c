#include <stdio.h>

/* AUthor: Ian Kabaka, 

admission number:BCS-03-0068/2026
 Date May 25 2026 */

int main(){
    int attendance;
    float average_marks;

    printf("Enter the class attendance:\n ");
    scanf("%d", &attendance);

    printf("Enter the average marks: \n");
    scanf("%f", &average_marks);

    if (attendance >= 75 && average_marks >= 40 ){
        printf("you are eligible for the exams\n");
    }
    else{
        printf("Not eligible.");
    }

    return 0;
}