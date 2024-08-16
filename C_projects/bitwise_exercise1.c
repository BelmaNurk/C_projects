#include<stdio.h>

int main(){
    
    int x=6; // 00000110
    int y=12;// 00001100
    int z=0;//  00000100

    z=x&y; //4
    printf("x & y = %d\n ", z);
    z=x|y; //14
    printf("x | y = %d\n", z);
    z=y<<1; //24 //left shift mnozi
    printf("x << y = %d\n", z);
    z=x>>1; //right shift dijeli
    printf("x >> y = %d ", z);

    
    return 0;
}