#include<stdio.h>

int main(){
    printf("Enter any number to check its nth bit: ");
    int num, pos;
    scanf("%d", &num);
    printf("Enter bit position: ");
    scanf("%d", &pos);

    int bit_status;
    //ovdje pomjeramo bit koji je na zeljenoj poziciiji na kraj, i onda to poredimo sa binarnom 1
    bit_status=(num>>pos)&1;

    printf("The %d bit is set to %d\n", pos, bit_status);

    printf("Enter number to set nth bit: ");
    int num1, pos1;
    scanf("%d", &num1);
    printf("Enter bit position: ");
    scanf("%d", &pos1);
    int new_num;
    //pomjeramo 1 do zeljene poziciije i radimo and
    new_num=(1<<pos1)|num1;

    printf("Bit set successfully.\n\n");
    printf("Number before setting %d bit: %d (in decimal)\n", pos1, num1);
    printf("Number after setting %d bit: %d (in decimal)\n\n", pos1, new_num);

    printf("Enter number to unset nth bit: ");
    int num2, pos2;
    scanf("%d", &num2);
    printf("Enter bit position: ");
    scanf("%d", &pos2);
    int new_num2;
    new_num2=num2&(~(1<<pos2));

    printf("Bit set successfully.\n\n");
    printf("Number before setting %d bit: %d (in decimal)\n", pos2, num2);
    printf("Number after setting %d bit: %d (in decimal)\n\n", pos2, new_num2);

    printf("Enter number to invert nth bit: ");
    int num3, pos3;
    scanf("%d", &num3);
    printf("Enter bit position: ");
    scanf("%d", &pos3);
    int new_num3;
    new_num3=num3^(1<<pos3);

    printf("Bit set successfully.\n\n");
    printf("Number before inverting %d bit: %d (in decimal)\n", pos3, num3);
    printf("Number after inverting %d bit: %d (in decimal)\n\n", pos3, new_num3);

    printf("Let's flip all bits in number\n");
    int num4;
    printf("Enter any number: ");
    scanf("%d", &num4);
    int new_num4= ~num4;
    printf("After flipping we get: %d\n\n", new_num4);




    return 0;
}