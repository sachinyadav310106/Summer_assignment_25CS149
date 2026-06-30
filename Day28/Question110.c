#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    do
    {
        printf("\n===== BANK MENU =====");
        printf("\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Check Balance");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                b.balance += amount;
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if(amount <= b.balance)
                    b.balance -= amount;
                else
                    printf("Insufficient Balance!\n");
                break;

            case 3:
                printf("\nAccount Number : %d", b.accNo);
                printf("\nCustomer Name : %s", b.name);
                printf("\nBalance : %.2f\n", b.balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}