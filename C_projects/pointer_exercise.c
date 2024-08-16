#include<stdio.h>
#define max_size 100

void swap(int * ptr1, int * ptr2);
void reverse_array(int * ptr1, int size);
int * function_to_return_more_values(int * numbers,  int size);

int main(){

    char character='C';
    int integer=12;
    float float_num=10.5f;
    long long big_int=1123455ll;

    printf("Value of character = %c, Address of character = %u\n", character, &character);
    printf("Value of integer = %d, Address of integer = %u\n", integer, &integer);
    printf("Value of float = %.2f, Address of float = %u\n", float_num, &float_num);
    printf("Value of big integer = %lld, Address of float = %u\n", big_int, &big_int);

    printf("Enter two numbers to calculate their sum using pointers:\n");
    int num1, num2, sum;
    int *ptr1;
    int *ptr2;
    ptr1=&num1;
    ptr2=&num2;

    scanf("%d%d",ptr1, ptr2);

    sum=*ptr1+*ptr2;

    printf("Sum of your numbers: %d\n", sum);

    printf("Numbers before swaping: a = %d, b = %d\n", *ptr1, *ptr2);
    swap(ptr1, ptr2);
    printf("Numbers after swaping: a = %d, b = %d\n", *ptr1, *ptr2);

    printf("Access array using pointers.\n");
    printf("Enter size of an array: ");
    int size;
    scanf("%d", &size);
    int array[max_size];
    int *ptr=array;

    for(int i=0; i<size; i++){
        printf("Enter %d element: ",i);
        scanf("%d", ptr);
        ptr++;
        }
        ptr=array;

        printf("\nPrinting elements of an array using pointers\n");
        for(int i=0; i<size; i++){
            printf("%d ", *ptr);
            ptr++;
        }

         printf("\nPrinting elements of an array in reverse order\n");
         reverse_array(array, size);
        printf("\n");
         printf("Copyinh elements from one array to another using pointers\n");
         int array2[max_size];
         int *ptr3=array2;
         ptr=array;

         for(int i=0; i<size; i++){
            *ptr3=*ptr;
            ptr3++;
            ptr++;
         }
         ptr3=array2;
         printf("Printing elements of second array using pointers\n");
        for(int i=0; i<size; i++){
            printf("%d ", *ptr3);
            ptr3++;
        }
        printf("\n");
          printf("Testing function that returns more values\n");
          int* ptr4=function_to_return_more_values(array, size);
          for(int i=0; i<size; i++){
            printf("%d ", *ptr4);
            ptr4++;
        }
        printf("\n");


    

    return 0;
}

void swap(int * ptr1, int * ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void reverse_array(int * ptr1, int size){
    int* ptr=ptr1+size-1;
    for(int i=0; i<size; i++){
        printf("%d ", *ptr);
        ptr--;

    }   
}

int * function_to_return_more_values(int * numbers, int size){
    for(int i=0; i<size; i++){
        numbers[i]=i;
        }
        return numbers;


}




