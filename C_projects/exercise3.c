#include<stdio.h>

int main(){

    printf("Enter lenght: ");
    float lenght;
    scanf("%f", &lenght);

    printf("Enter widht: ");
    float widht;
    scanf("%f", &widht);

    printf("Perimeter of rectangle = %.2f units\n", 2*(lenght+widht));
    printf("Area of rectanle = %.2f sq. units\n", lenght*widht);

    printf("Enter radius: ");
    float radius;
    scanf("%f", &radius);
    printf("Diameter = %.2f units\n",2*radius);
    printf("Circumference = %.2f units\n",2*3.14*radius);
    printf("Area = %.2f sq. units\n", 3.14*radius);



    return 0;
}