#include<stdio.h>

int main(){

    char charVal;
    unsigned char uCharVal;

    short shortVal;
    unsigned short uShortVal;

    int intVal;
    unsigned int uIntVal;
    

    long longVal;
    unsigned long uLongVal;

    long long LongVal;
    unsigned long long ULongVal;

    float floatVal;
    double doubleVal;
    long double longDoubleVal;

    printf("Enter a character: ");
    charVal=getchar();
    getchar(); //to capture enter

    printf("Enter another character: ");
    uCharVal=getchar();
    getchar();

    printf("Enter a signed short value: ");
    scanf("%hi", &shortVal);

    printf("Enter an usigned short value: ");
    scanf("%hu", &uShortVal);

    printf("Enter a signed int value: ");
    scanf("%d", &intVal);

    printf("Enter an unsigned int value: ");
    scanf("%lu", &uIntVal);

    printf("Enter a signed long value: ");
    scanf("%ld", &longVal);

    printf("Enter an unsigned long value: ");
    scanf("%lu", &uLongVal);

    printf("Enter a signed long long value: ");
    scanf("%lld", &LongVal);

    printf("Enter an unsigned long long value: ");
    scanf("%llu", &ULongVal);

    printf("Enter a signed float value: ");
    scanf("%f", &floatVal);

    printf("Enter a signed double value: ");
    scanf("%lf", &doubleVal);

    printf("Enter a long double value: ");
    scanf("%Lf", &longDoubleVal);

     printf("\nYou entered character: '%c' \n", charVal);
    printf("You entered unsigned character: '%c' \n\n", uCharVal);
    
    printf("You entered signed short: %hi \n", shortVal);
    printf("You entered unsigned short: %hu \n\n", uShortVal);
    
    printf("You entered signed int: %d \n", intVal);
    printf("You entered unsigned int: %lu \n\n", uIntVal);
    
    printf("You entered signed long: %ld \n", longVal);
    printf("You entered unsigned long: %lu \n\n", uLongVal);
    
    printf("You entered signed long long: %lld \n", LongVal);
    printf("You entered unsigned long long: %llu \n\n", ULongVal);
    
    printf("You entered float: %f \n", floatVal);
    printf("You entered double: %lf \n", doubleVal);
    printf("You entered long double: %Lf \n", longDoubleVal);


    







    return 0;
}