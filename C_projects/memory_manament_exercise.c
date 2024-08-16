#include<stdio.h>
#include<stdlib.h>

/*The process of reserving  memory is called allocation.
The way to allocate memory depends on the type of memory
C has two types of memory static and dynamic
*/

int main(){
    //static memory
    int integer_varibale=20;
    char character_variable='c';
    float float_variable=23.3;
    double double_variable=234.5;

    printf("Size od integer variable: %lu\n", sizeof(integer_varibale));
    printf("Size od character variable: %lu\n", sizeof(character_variable));
    printf("Size od float variable: %lu\n", sizeof(float_variable));
    printf("Size od integer variable: %lu\n", sizeof(double_variable));

    //dynamic memory
    // The malloc() and calloc() functions allocate some memory and return a pointer to its address.
    //int *studnets;
    int num_of_students=12;
    int *studnets=malloc(num_of_students);
    printf("%d", num_of_students*sizeof(*studnets));


    return 0;
}