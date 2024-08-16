#include <stdio.h>
#define max_size 100
struct account
{
    char first_name[max_size];
    char last_name[max_size];
    char father_name[max_size];
    char mother_name[max_size];
    char address[max_size];
    char account_type[max_size];
    int date_of_birth;
    int mounth;
    int year;
    char username[max_size];
    char password[max_size];
    double money;
};

struct account account();
void check_amount(struct account accounts[], int size);
void print(struct account user);
void transfer_money(struct account accounts[], int size);
int main()
{
    struct account accounts[max_size];
    int size = 0;
    printf("Welcome to NLB bank, choose one option.\n");
    printf("1. Create account.\n");
    printf("2. Log in.\n");
    printf("3. Exit.\n");
    int option;
    scanf("%d", &option);
    if (option == 1)
    {
        accounts[1] = account();
        size++;
        print(accounts[1]);
    }
    else if (option == 2)
    {
        check_amount(accounts, size);
    }
    else if(option==3){
        transfer_money(accounts, size);
    }
    else
    {
        return 0;
    }
    

    return 0;
}

struct account account()
{
    struct account new_account;
    printf("Enter first name: ");
    scanf("%s", new_account.first_name);

    printf("Enter last name: ");
    scanf("%s", new_account.last_name);

    printf("Enter father name: ");
    scanf("%s", new_account.father_name);

    printf("Enter mother name: ");
    scanf("%s", new_account.mother_name);

    printf("Enter addresss: ");
    getchar(); // to consume the leftover newline character
    fgets(new_account.address, max_size, stdin);
    // Removing the trailing newline character if present
    // new_account.address[strcspn(new_account.address, "\n")] = 0;

    printf("Enter account type: ");
    scanf("%s", new_account.account_type);

    printf("Enter date of birth: ");
    scanf("%d", &new_account.date_of_birth);

    printf("Enter mounth: ");
    scanf("%d", &new_account.mounth);

    printf("Enter year: ");
    scanf("%d", &new_account.year);

    printf("Enter username: ");
    scanf("%s", &new_account.username);

    printf("Enter password: ");
    scanf("%s", &new_account.password);

    printf("Enter amount od money.\n");
    scanf("%f", &new_account.money);

    return new_account;
}

void print(struct account user)
{
    printf("%s", user.first_name);
}
void check_amount(struct account accounts[], int size)
{
    printf("Please enter correct username.\n");
    char username[max_size];
    scanf("%s", username);
    for (int i = 0; i < size; i++)
    {
        if (accounts[i].username == username)
        {
            printf("%f", accounts[i].money);
            return;
        }
    
    }
     printf("No user with that username.\n");
}

void transfer_money(struct account accounts[], int size){
     printf("Please enter correct username.\n");
    char username[max_size];
    scanf("%s", username);
    for (int i = 0; i < size; i++)
    {
        if (accounts[i].username == username)
        {
            printf("%f", accounts[i].money);
            printf("Enter the amount: ");
            double money;
            scanf("%f", &money);
            accounts[i].money+=money;
            return;
        }
    
    }
     printf("No user with that username.\n");

}
