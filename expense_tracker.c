#include <stdio.h>
#include <string.h>

struct Expense {
    float amount;
    char category[20];
};

struct Expense expenses[100];
int expenseCount = 0;
float budget = 0;

// Set Monthly Budget
void setBudget() {
    float amount;

    printf("Enter your monthly budget: Rs. ");
    scanf("%f", &amount);

    if (amount > 0) {
        budget = amount;
        printf("Monthly budget set to Rs. %.2f\n", budget);
    } else {
        printf("Invalid budget! Enter a positive amount.\n");
    }
}

// Validate Category
int isValidCategory(char cat[]) {
    if (strcmp(cat, "Food") == 0 ||
        strcmp(cat, "Travel") == 0 ||
        strcmp(cat, "Books") == 0 ||
        strcmp(cat, "Entertainment") == 0) {
        return 1;
    }
    return 0;
}

// Add Expense
void addExpense() {
    float amt;
    char cat[20];

    if (expenseCount >= 100) {
        printf("Expense storage is full!\n");
        return;
    }

    printf("Enter amount: Rs. ");
    scanf("%f", &amt);

    if (amt <= 0) {
        printf("Invalid amount! Amount must be positive.\n");
        return;
    }

    printf("Enter category (Food/Travel/Books/Entertainment): ");
    scanf("%19s", cat);

    if (!isValidCategory(cat)) {
        printf("Invalid category!\n");
        return;
    }

    expenses[expenseCount].amount = amt;
    strcpy(expenses[expenseCount].category, cat);
    expenseCount++;

    printf("Expense Added Successfully!\n");
}

// View All Expenses
void viewExpenses() {
    if (expenseCount == 0) {
        printf("No expenses added yet!\n");
        return;
    }

    printf("\n--- All Expenses ---\n");

    for (int i = 0; i < expenseCount; i++) {
        printf("%d. Amount: Rs. %.2f | Category: %s\n",
               i + 1,
               expenses[i].amount,
               expenses[i].category);
    }
}

// Calculate Total Spending
float calculateTotal() {
    float total = 0;

    for (int i = 0; i < expenseCount; i++) {
        total += expenses[i].amount;
    }

    return total;
}

// View Expense Summary
void displaySummary() {
    float total = calculateTotal();
    float categoryTotal[4] = {0};
    int highest = 0;

    char categories[4][20] = {
        "Food", "Travel", "Books", "Entertainment"
    };

    for (int i = 0; i < expenseCount; i++) {
        for (int j = 0; j < 4; j++) {
            if (strcmp(expenses[i].category,
                       categories[j]) == 0) {
                categoryTotal[j] += expenses[i].amount;
            }
        }
    }

    printf("\n--- Expense Summary ---\n");
    printf("Monthly Budget: Rs. %.2f\n", budget);
    printf("Total Spending: Rs. %.2f\n", total);
    printf("Remaining Budget: Rs. %.2f\n",
           budget - total);

    for (int i = 0; i < 4; i++) {
        printf("%s: Rs. %.2f\n",
               categories[i], categoryTotal[i]);

        if (categoryTotal[i] > categoryTotal[highest]) {
            highest = i;
        }
    }

    if (expenseCount > 0) {
        printf("Highest Spending Category: %s\n",
               categories[highest]);
    } else {
        printf("No expenses recorded.\n");
    }
}

// View Category-wise Expenses
void viewCategoryExpenses() {
    char categories[4][20] = {
        "Food", "Travel", "Books", "Entertainment"
    };

    printf("\n--- Category-wise Expenses ---\n");

    for (int i = 0; i < 4; i++) {
        float total = 0;

        printf("\n%s:\n", categories[i]);

        for (int j = 0; j < expenseCount; j++) {
            if (strcmp(expenses[j].category,
                       categories[i]) == 0) {
                printf("Rs. %.2f\n", expenses[j].amount);
                total += expenses[j].amount;
            }
        }

        printf("Total: Rs. %.2f\n", total);
    }
}

// Check Budget Status
void checkBudgetStatus() {
    float total = calculateTotal();

    printf("\n--- Budget Status ---\n");

    if (total > budget) {
        printf("Warning! Budget exceeded by Rs. %.2f\n",
               total - budget);
    } else {
        printf("You are within your budget!\n");
        printf("Remaining: Rs. %.2f\n", budget - total);
    }
}

// Main Function with Switch Case
int main() {
    int choice;

    do {
        printf("\n=================================\n");
        printf("     PERSONAL EXPENSE TRACKER\n");
        printf("=================================\n");

        printf("1. Set Monthly Budget\n");
        printf("2. Add Expense\n");
        printf("3. View All Expenses\n");
        printf("4. View Expense Summary\n");
        printf("5. View Category-wise Expenses\n");
        printf("6. Check Budget Status\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Enter a number.\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            choice = 0;
        }

        switch (choice) {
            case 1:
                setBudget();
                break;

            case 2:
                if (budget <= 0) {
                    printf("Please set a monthly budget first.\n");
                } else {
                    addExpense();
                }
                break;

            case 3:
                viewExpenses();
                break;

            case 4:
                displaySummary();
                break;

            case 5:
                viewCategoryExpenses();
                break;

            case 6:
                checkBudgetStatus();
                break;

            case 7:
                printf("Exiting Personal Expense Tracker...\n");
                break;

            default:
                printf("Invalid choice! Select between 1 and 7.\n");
        }

    } while (choice != 7);

    return 0;
}
