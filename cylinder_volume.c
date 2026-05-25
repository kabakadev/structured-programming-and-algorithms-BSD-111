#include <stdio.h>

#define PI 3.14159


int main(){
    double radius;
    double height;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    printf("Enter the height: ");
    scanf("%lf", &height);

    double volume = PI * radius*radius * height;

    printf("The volume is: %.2lf\n",volume );

    double surface_area = 2 * PI * radius * radius + 2 * PI * radius * height;
    printf("The surface area is :%.2lf\n", surface_area);

    return 0;
}