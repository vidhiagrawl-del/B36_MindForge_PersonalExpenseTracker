# Personal Expense Tracker

## Project Overview

Personal Tracker is an application designed to help users keep track of their daily activities, tasks, goals, and progress in an organized manner. It provides a simple interface where users can add, update and view their records.

## Objective

The objective of this project is to provide an easy-to-use system that helps users organize their daily activities and monitor their progress efficiently.

## Features

-Task Creation: Users can add new tasks by entering the required task details.

-Task Management: Added tasks can be viewed, edited, and deleted whenever required.

-Input Validation: The application checks the user input before adding a task to prevent empty or invalid entries.

-Dynamic Updates: Changes made to tasks are reflected immediately on the interface without requiring the user to manually reload the page.

-Simple User Interface: The interface was designed to be clean and easy to understand so that users can quickly manage their activities.

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

## How to Run the Project
1. Clone the GitHub repository.
2. Open the project folder in VS Code.
3. Open the main project file.
4. Run the application.
5. Start adding and tracking your activities.

## Team Members & Contributions

| Team Member | Coding Contribution | Non-Coding Contribution |
|---|---|---|
| **Vidhi Agrawal** | Developed the main program structure, menu-driven interface, monthly budget setup, switch-case control flow, and budget validation. Integrated the different modules into the final program. | Created and managed the GitHub repository, organized project files, integrated team submissions, prepared the README documentation, and handled final GitHub submission. |
| **Sakshi Sinha** | Developed the expense management module, including expense storage, categories, adding expenses, viewing recorded expenses, and input validation. | Prepared the algorithm/pseudocode, flowchart, and sample test cases for the project. |
| **Dhara Karavadara** | Developed the expense analysis module, including total expenditure, remaining budget, category-wise spending, highest expenditure category, and budget status/warnings. |  PowerPoint presentation, and helped document sample program outputs. |

### Collaborative Contributions

All three team members participated in testing and debugging the final program, reviewing the complete source code, verifying sample outputs, and preparing for the project demonstration and viva.

## Conclusion

The Personal Expense Tracker was successfully developed as a menu-driven C program to help students manage their monthly expenses efficiently. The program allows users to set a monthly budget, record and categorize expenses, monitor total and remaining budget, identify the highest spending category, and receive a warning when the budget is exceeded.

Through this project, we applied fundamental C programming concepts such as variables, conditional statements, loops, arrays, structures, functions, and switch-case statements. The project also helped us improve our problem-solving, debugging, teamwork, and collaborative development skills.
