#include <stdio.h>
#include <string.h>
float setBudget()
{
    float budget;

    printf("Enter your monthly budget: Rs. ");
    scanf("%f", &budget);

    if (budget > 0)
    {
        printf("Monthly budget set to Rs. %.2f\n", budget);
        return budget;
    }
    else
    {
        printf("Invalid budget! Please enter a positive amount.\n");
        return 0;
    }
}
struct Expense {
    float amount;
    char category[20];
};
struct Expense expenses[100];
int expenseCount = 0;

int isValidCategory(char cat[]) {
    if (strcmp(cat, "Food")==0 || strcmp(cat, "Travel")==0 || strcmp(cat, "Books")==0 || strcmp(cat, "Entertainment")==0)
        return 1;
    return 0;
}

void addExpense() {
    float amt;
    char cat[20];
    printf("Enter amount: ");
    scanf("%f", &amt);
    if (amt <= 0) {
        printf("Invalid amount! Amount must be > 0\n");
        return;
    }
    printf("Enter category (Food/Travel/Books/Entertainment): ");
    scanf("%s", cat);
    if (!isValidCategory(cat)) {
        printf("Invalid category!\n");
        return;
    }
    expenses[expenseCount].amount = amt;
    strcpy(expenses[expenseCount].category, cat);
    expenseCount++;
    printf("Expense Added Successfully!\n");
}

void viewExpenses() {
    if (expenseCount == 0) {
        printf("No expenses added yet!\n");
        return;
    }
    printf("\n--- All Expenses ---\n");
    for (int i = 0; i < expenseCount; i++) {
        printf("%d. Amount: %.2f | Category: %s\n", i+1, expenses[i].amount, expenses[i].category);
    }
}
int main()
{
    int choice;
    float budget = 0;

    do
    {
        printf("\n=================================\n");
        printf("     PERSONAL EXPENSE TRACKER\n");
        printf("=================================\n");

        printf("1. Set Monthly Budget\n");
        printf("2. Add Expense\n");
        printf("3. View All Expenses\n");
        printf("4. View Expense Summary\n");
        printf("5. View Category-wise Expenses\n");
        printf("6.Check Budget Status\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                budget = setBudget();
                break;

            case 2:
             if (budget <= 0)
            {
                    printf("Please set a monthly budget first before adding expenses.\n");
                }
                else
                {
                    addExpense();
                }
                break;

            case 3:
                viewExpenses();
                break;

            case 4:
                printf("Expense Summary feature will be added here.\n");
                break;

            case 5:
                printf("Category-wise Expenses feature will be added here.\n");
                break;

            case 6:
                printf("Check Budget Status feature will be added here.\n");
                break;

            case 7:
                printf("Exiting Personal Expense Tracker...\n");
                break;

            default:
                printf("Invalid choice! Please select between 1 and 6.\n");
        }

    } while(choice != 7);

    return 0;
}
