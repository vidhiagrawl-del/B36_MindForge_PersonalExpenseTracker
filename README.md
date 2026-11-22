# B36_MindForge_PersonalExpenseTracker
Personal Expense Tracker developed in C for the C Programming Mini Hackathon.

## Algorithm

- Step 1: START
- Step 2: Initialize expenseCount = 0, monthlyBudget = 0
- Step 3: Display Main Menu (1 to 7)
- Step 4: Take choice from user
- Step 5: IF choice == 1 THEN Take monthlyBudget from user
- Step 6: IF choice == 2 THEN Take title, amount, category and Add Expense
- Step 7: IF choice == 3 THEN Display All Expenses
- Step 8: IF choice == 4 THEN Display Category-wise Total and Total Expenses
- Step 9: IF choice == 5 THEN Take expense number and Update Expense
- Step 10: IF choice == 6 THEN Compare Total Expenses with Budget and Show Status
- Step 11: IF choice == 7 THEN STOP
- Step 12: Go to Step 3
- Step 13: END
## Test Cases 

| Test No. | Test Case | Input | Expected Output |
| --- | --- | --- | --- |
| 1 | Add Valid Expense | 500, Food | Expense Added Successfully! |
| 2 | Add Invalid Category | 200, Party | Invalid category! |
| 3 | View Empty List | No expense added | No expenses added yet! |
| 4 | View Expense List | Added 500 Food, 200 Travel | Both expenses displayed |
| 5 | Invalid Choice | Choice: 9 | Invalid choice! |
