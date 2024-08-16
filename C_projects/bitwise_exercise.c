#include<stdio.h>
#define BITS sizeof(int)*8
int main(){

    printf("Enter any number: ");
    int num;
    scanf("%d", &num);

    if(num&1) //The statement if(num & 1) is equivalent to if(num & 1 == 1)
    printf("LSB of %d is set\n", num);
    else
    printf("LSB of %d is unset\n", num);

    int msb;
    msb=1<<(BITS-1);

    if(num&msb)
    printf("MSB of %d is set", num);
    else
    printf("MSB of %d is unset", num);



    return 0;
}