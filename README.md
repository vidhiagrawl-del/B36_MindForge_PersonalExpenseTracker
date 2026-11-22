# B36_MindForge_PersonalExpenseTracker
Personal Expense Tracker developed in C for the C Programming Mini Hackathon.
ALGORITHM: Add Expense and View Expenses

Step 1: START
Step 2: Initialize expenseCount = 0
Step 3: Display Main Menu
Step 4: Take choice from user

Step 5: IF choice == 2 THEN  // Add Expense
            Ask user to enter Amount
            Ask user to enter Category
            IF Category is Food, Travel, Rent, Bills OR Other THEN
                Save expense in list
                Increment expenseCount by 1
                Display "Expense Added Successfully!"
            ELSE
                Display "Invalid category!"
            END IF

Step 6: IF choice == 3 THEN  // View Expenses
            IF expenseCount == 0 THEN
                Display "No expenses added yet!"
            ELSE
                FOR i = 0 TO expenseCount - 1
                    Display expense[i].amount and expense[i].category
                END FOR
            END IF

Step 7: IF choice == 6 THEN
            STOP
        ELSE
            Go to Step 3

Step 8: END
