#include<stdio.h>
#define max_size 100

int main(){

    int array[max_size];

    printf("Enter the size of array: ");
    int size;
    scanf("%d", &size);
    for(int i=0; i<size; i++){
        printf("Enter %d element: ", i);
        scanf("%d", &array[i]);
    }

    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    int odd_numbers=0;
    int even_numbers=0;
    int negative_numbers=0;

    for(int i=0; i<size; i++){
        if(array[i]%2==0)
        even_numbers++;
        else
        odd_numbers++;
    }

    for(int i=0; i<size; i++){
        if(array[i]<0)
        negative_numbers++;
    }

    printf("Total number of even numbers is: %d\n", even_numbers);
    printf("Total number of odd numbers is: %d\n", odd_numbers);
    printf("Total number of negative numbers is: %d\n", negative_numbers);

    for(int i=0; i<=9; i++){
        int count=0;
        for(int j=0; j<size; j++){
            if(i==array[j]){
                count++;
            }
        }
        printf("%d occurs %d times\n", i, count);
    }
    return 0;
}