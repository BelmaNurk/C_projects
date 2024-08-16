#include <stdio.h>
#define max_size 100
int find_lenght_of_string(char *string);
void print_string(char *string);
char *concatenate_strings(char *strng1, char *string2);
void compare_two_strings(char *string1, int size1, char *string2, int size2);
char *creating_uppercase_string(char *string1);

int main()
{
    char first_string[max_size] = "GREETINGS";
    char second_string[max_size] = "HELLO";
    char little_letters[max_size] = "hejo";
    char *big_letters = creating_uppercase_string(little_letters);
    print_string(big_letters);
    int lengt2 = find_lenght_of_string(second_string);
    // int lenght=find_lenght_of_string(first_string);
    // printf("Lenght of a first string is %d\n", lenght);

    int lenght = 0;
    for (int i = 0; first_string[i] != '\0'; i++)
    {
        lenght++;
    }
    printf("Lenght of a first string is %d\n", lenght);
    printf("Lenght of a first string  using function is %d\n", find_lenght_of_string(first_string));

    for (int i = 0; second_string[i] != '\0'; i++)
    {
        first_string[i] = second_string[i];
    }
    printf("Adding one string to another: ");
    print_string(first_string);

    char *third_string = concatenate_strings(first_string, second_string);
    print_string(third_string);

    printf("Concatenated string = %s\n", third_string);
    int lenght3 = find_lenght_of_string(third_string);

    compare_two_strings(first_string, lenght, third_string, lenght3);

    return 0;
}

int find_lenght_of_string(char *string)
{
    int lenght = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        lenght++;
    }
    return lenght;
}

void print_string(char *string)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}

char *concatenate_strings(char *string1, char *string2)
{
    int lenght = find_lenght_of_string(string1);
    int j = 0;
    for (int i = lenght - 1; string2[i] != '\0'; i++)
    {
        string1[i] = string2[j];
        j++;
    }
    string1[lenght + j] = '\0';
    return string1;
}

void compare_two_strings(char *string1, int size1, char *string2, int size2)
{
    if (size1 != size2)
    {
        printf("Both strings must have same size.\n");
        return;
    }
    for (int i = 0; i < size1; i++)
    {
        if (string1[i] != string2[i])
        {
            printf("Strings are not equal.\n");
            return;
        }
    }
    printf("Strings are equal.\n");
}

char *creating_uppercase_string(char *string1)
{
    for (int i = 0; string1[i] != '\0'; i++)
    {
        if (string1[i] > 'a' && string1[i] < 'z')
        {
            string1[i] = string1[i] - 32;
        }
    }
    return string1;
}
