//Bibhashree Pradhan
#include <stdio.h>
#define DEFAULT_PIN 1234
#define INITIAL_BALANCE 1000.0
#define DAILY_DEPOSIT_LIMIT 5000.0
int main()
{
    int Pin;
    float balance = INITIAL_BALANCE;
    int choice;
    printf("Enter your PIN: ");
    scanf("%d",&Pin);
    if (Pin != DEFAULT_PIN)
    {
     printf("Incorrect PIN. Access denied.\n"); 
    }
    printf("\nATM Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
     {
        case 1: 
            printf("Your current balance is: $%.2f\n", balance);
            break;

        case 2:
        { 
            float withdrawAmount;
            printf("Enter the amount to withdraw: ");
            scanf("%f", &withdrawAmount);

            if (withdrawAmount <= 0) 
            {
                printf("Please enter a positive value.\n");
            }
             else if (withdrawAmount > balance)
              {
                printf("Insufficient balance.\n");
            }
             else {
                balance= balance-withdrawAmount;
                printf("Withdrawal successful. Your new balance is: $%.2f\n", balance);
            }
            break;
        }
        case 3: 
        {
            float depositAmount;
            printf("Enter the amount to deposit: ");
            scanf("%f", &depositAmount);

            if (depositAmount <= 0) 
            {
                printf("Please enter a positive value.\n");
            }
            else if (depositAmount > DAILY_DEPOSIT_LIMIT)
            {
                printf("Deposit exceeds daily limit of $%.2f. Transaction failed.\n", DAILY_DEPOSIT_LIMIT);
            } 
            else {
                balance= balance+depositAmount;
                printf("Deposit successful. Your new balance is: $%.2f\n", balance);
            }
            break;
        }
        case 4: 
            printf("Thank you!\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}
