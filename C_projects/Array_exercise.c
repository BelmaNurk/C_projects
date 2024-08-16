#include<stdio.h>
#define max_size 100

int main(){

    int array[max_size];
    int second_array[max_size];
    int N;

    printf("Enter size: ");
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        printf("Enter %d element: ", i);
        scanf("%d", &array[i]);
    }

    printf("Elements of your array: ");
     for(int i=0; i<N; i++){
        printf("%d,", array[i]);
    }

    int sum=0;
    for(int i=0; i<N; i++){
        sum+=array[i];
    }

    printf("\nSum od all elements in array is: %d ", sum);

    int max=array[0];
    int min=array[0];
     for(int i=1; i<N; i++){
        if(max<array[i])
        max=array[i];
    }
    for(int i=1; i<N; i++){
        if(min>array[i])
        min=array[i];
    }

    printf("\nMinimum of array is %d and maximum of array is %d ", min, max);
    








    return 0;
}