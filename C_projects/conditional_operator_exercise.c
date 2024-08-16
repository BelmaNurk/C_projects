#include<stdio.h>

int main(){

    printf("Enter first number: ");
    int num1;
    scanf("%d", &num1);
    printf("Enter second number: ");
    int num2;
    scanf("%d", &num2);
    printf("Enter third number: ");
    int num3;
    scanf("%d", &num3);

    int max;

    max=(num1>num2 && num1>num3) ? num1 : (num2>num3) ? num2 : num3;

    printf("Maximum between %d, %d and %d is: %d\n", num1, num2, num3, max);

    (max%2==0) ? printf("Number %d is even.\n", max) : printf("Number %d is odd.\n", max);

    printf("Enter any character: ");
    getchar();
    char ch;
    scanf("%c", &ch);
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ? printf("It is alphabet.\n") : printf("Its not alphabet.\n");

    return 0;
}