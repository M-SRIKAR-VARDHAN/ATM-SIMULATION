# INTERNSHIP
# ATM Simulation System

This is a simple ATM simulation program written in C++. It allows users to perform basic ATM transactions such as withdrawal, deposit, checking balance, and funds transfer.

## Features

- **Withdrawal**: Withdraw money from your savings or via quick cash.
- **Deposit**: Deposit money into your savings account.
- **Check Balance**: Check the current balance of your savings account.
- **Funds Transfer**: Transfer funds from your savings account to another account.
- **Receipt Printing**: Print a receipt for transactions.

## Requirements

- A C++ compiler (e.g., GCC, MSVC)
- A terminal or command prompt to run the compiled program

## Usage

1. **Welcome Screen**: 
   - The program starts with a welcome screen. Press `Enter` to insert your card.

2. **Login**:
   - Enter your bank account number.
   - Enter your Personal Identification Number (PIN). The PIN will be masked with asterisks (`*`).

3. **Main Menu**:
   - Choose from the following options:
     1. Withdrawal
     2. Deposit
     3. Check Balance
     4. Funds Transfer
     5. Exit

4. **Withdrawal**:
   - Choose to withdraw from savings or via quick cash.
   - Enter the amount to withdraw. Ensure the amount does not exceed the available balance.

5. **Deposit**:
   - Choose to deposit into savings.
   - Enter the amount to deposit. The balance will be updated accordingly.

6. **Check Balance**:
   - Choose to check the balance from savings. The current balance will be displayed.

7. **Funds Transfer**:
   - Choose to transfer funds from the savings account.
   - Enter the recipient's account number and the amount to transfer. Ensure the amount does not exceed the available balance.

8. **Receipt**:
   - For each transaction, a receipt will be printed showing the transaction details.

## Code Overview

The main functions and their purposes are as follows:

- **main**: The entry point of the program. It handles user authentication and displays the main menu.
- **showMenu**: Displays the main menu of transactions.
- **welcomeScreen**: Displays the welcome screen.
- **showLogo**: Displays the ATM logo.
- **receipt**: Prints the receipt for transactions.
- **waiting**: Creates a delay in milliseconds.
