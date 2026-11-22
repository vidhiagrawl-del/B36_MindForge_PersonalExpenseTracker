#include <stdio.h>

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
                    printf("Add Expense feature will be added here.\n");
                }
                break;

            case 3:
                printf("View Expenses feature will be added here.\n");
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