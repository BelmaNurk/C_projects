#include<stdio.h>


int main(){

    int num1, num2, sum;
    sum=0;

    printf("Enter first operand: ");
    scanf("%d", &num1);

    printf("Enter second operand: ");
    scanf("%d", &num2);

    float div;

    printf("Sum of your numbers is: %d\n", num1+num2);
    printf("Difference of your numbers is: %d\n", num1-num2);
    printf("Product of your numbers is: %d\n", num1*num2);
    printf("Module of your numbers is: %d\n", num1%num2);
    printf("Qoutiend of your numbers is: %f\n", (float)num1/num2);




    return 0;
}
