#include<stdio.h>
#define max_size 100

int main(){

    FILE * fptr;
    char array[max_size];

    fptr=fopen("Second_file.txt", "a");
    /** 
    if(fptr==NULL){
        printf("Unable to open the file.\n");
        //exit(EXIT_FAILURE);
    }
    else{
    fprintf(fptr, "Hello\nthis is my first file!\n");
    printf("Enter text to file.\n");
    fgets(array, max_size, stdin);
    fputs(array, fptr);

    **/
   char ch;
   if(fptr==NULL){
    printf("Unable to open the file.\n");
   }
   else{
    do{
        ch=fgetc(fptr); //reading from file
        putchar(ch); //writing on console

    }
    while(ch!=EOF);
   }


    fclose(fptr);

    
    return 0;
}