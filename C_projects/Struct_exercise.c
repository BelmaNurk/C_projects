#include<stdio.h>
#define max_size 200

struct Stundet{
    char first_name[max_size];
    char last_name[max_size];
    int age;
};

int main(){
    struct Studnet first_student;
    

    printf("Enter information for the first stdudent.\n");
    printf("Enter first name: ");
    scanf("%s", first_student.first_name);
    printf("Enter last name: ");
    scanf("%s", first_student.last_name);
    printf("Enter age: ");
    scanf("%d", first_student.age);

    printf("Information about first student: \n");
    printf("Name: %s", first_student.first_name);
    printf("Last name: %s", first_student.last_name);
    printf("Age: %d", first_student.age);



    return 0;
}