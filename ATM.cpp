#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <conio.h>

using namespace std;

void showMenu();
void welcomeScreen();
void receipt();
void showLogo();

void waiting(unsigned int mseconds) {
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main() {
    int amount = 10000;
    int choice, account;
    string pin = "";
    char ast;

    cout << fixed << showpoint << setprecision(2);

    welcomeScreen();

    system("cls");
    showLogo();
    cout << "\n\n\t\t\t  Please type your Bank Account Number : ";
    cin >> account;
    cout << "\n\t\t\t  Please type Personal Identification Number(PIN) : ";
    ast = _getch();
    while (ast != 13) { // Enter key
        pin.push_back(ast);
        cout << '*';
        ast = _getch();
    }

    if (account != 12345 || pin != "55555") {
        cout << "\n\t\t\tInvalid Bank Account and PIN. Please try again!" << endl;
        _getch();
    } else {
        do {
            showMenu();
            cin >> choice;
            while (choice < 1 || choice > 5) {
                cout << "\n\t\t\tPlease enter your choice 1, 2, 3, 4, or 5: ";
                cin >> choice;
            }
            int withdrawChoice, depositChoice;
            int checkBalanceChoice, fundsTransferChoice;
            double money = 0.0;

            switch (choice) {
                case 1: {
                    system("cls");
                    showLogo();
                    cout << "\t\t\t  WITHDRAWAL TRANSACTION " << endl;
                    cout << "\n\n\t\t\t [ 1 ] From Savings" << endl;
                    cout << "\t\t\t [ 2 ] Quick Cash" << endl;
                    cout << "\t\t\t [ 3 ] Back to Main Menu" << endl;
                    cout << "\t\t\t _____________________________________________" << endl;
                    cout << "\t\t\t Enter your withdraw transaction: ";
                    cin >> withdrawChoice;
                    while (withdrawChoice < 1 || withdrawChoice > 3) {
                        system("cls");
                        showLogo();
                        cout << endl << " \t\t\t  WITHDRAWAL TRANSACTION ";
                        cout << "\n\n\t\t\t Invalid Transaction!\n\t\t\t Please re-enter 1, 2 or 3 :  ";
                        cin >> withdrawChoice;
                    }
                    if (withdrawChoice == 3) {
                        showMenu();
                    } else if (withdrawChoice == 2) {
                        int amount1;
                        system("cls");
                        showLogo();
                        cout << "\n\t\t\t  QUICK CASH TRANSACTION " << endl;
                        cout << "\n\n\t\t\t REMAINING BALANCE :  " << amount << endl;
                        cout << "\n\t\t\t Enter the Amount : ";
                        cin >> amount1;
                        if (amount1 <= amount) {
                            cout << "\n\t\t\t Your remaining quick cash balance:  " << amount - amount1 << endl;
                            waiting(3000);
                            receipt();
                            cout << "\n\t\t\tTRANSACTION:        QUICK WITHDRAWAL             " << endl;
                            cout << "\n\t\t\tAMOUNT:             " << amount1 << ".00              " << endl;
                            cout << "\n\t\t\tCURRENT BAL:        " << amount - amount1 << ".00      " << endl;
                            cout << "\n\t\t\tAVAILABLE BAL:      " << amount - amount1 << ".00      " << endl;
                            waiting(5000);
                            amount = amount - amount1;
                        } else {
                            cout << "\n\t\t\t Insufficient Balance!" << endl;
                        }
                        showMenu();
                    } else if (withdrawChoice == 1) {
                        int amount2;
                        system("cls");
                        showLogo();
                        cout << "\n\t\t\t  CASH SAVINGS TRANSACTION " << endl;
                        cout << "\n\n\t\t\t AVAILABLE BALANCE : " << amount << endl;
                        cout << "\t\t\t Enter the amount : ";
                        cin >> amount2;
                        if (amount2 <= amount) {
                            cout << "\t\t\t Your remaining savings balance:  " << amount - amount2 << endl;
                            waiting(5000);
                            system("cls");
                            receipt();
                            cout << "\n\t\t\t          TRANSACTION:    SAVINGS WITHDRAWAL                " << endl;
                            cout << "\n\t\t\t          AMOUNT:    " << amount2 << ".00\t                     " << endl;
                            cout << "\n\t\t\t          CURRENT BAL:    " << amount - amount2 << ".00          " << endl;
                            cout << "\n\t\t\t          AVAILABLE BAL:    " << amount - amount2 << ".00        " << endl;
                            waiting(5000);
                            amount = amount - amount2;
                        } else {
                            cout << "\n\t\t\t Insufficient Balance!" << endl;
                        }
                        showMenu();
                    }
                    break;
                }
                case 2: {
                    system("cls");
                    showLogo();
                    cout << " \t\t\t  DEPOSIT TRANSACTION " << endl;
                    cout << "\n\n\t\t\t [ 1 ] To Savings" << endl;
                    cout << "\t\t\t [ 2 ] Back to Main Menu" << endl;
                    cout << "\t\t\t _____________________________________________" << endl;
                    cout << "\t\t\t Enter your deposit transaction: ";
                    cin >> depositChoice;
                    while (depositChoice < 1 || depositChoice > 2) {
                        system("cls");
                        showLogo();
                        cout << endl << " \t\t\t  DEPOSIT TRANSACTION ";
                        cout << "\n\n\t\t\t Invalid Transaction!\n\t\t\t Please re-enter 1 or 2 :  ";
                        cin >> depositChoice;
                    }
                    if (depositChoice == 2) {
                        showMenu();
                    } else if (depositChoice == 1) {
                        int depamount1;
                        system("cls");
                        showLogo();
                        cout << endl << " \t\t\t  SAVINGS DEPOSIT TRANSACTION ";
                        cout << "\n\n\t\t\t Enter the deposit amount :  ";
                        cin >> depamount1;
                        amount = amount + depamount1;
                        cout << "\t\t\t Your New Balance:  " << amount << endl;
                        waiting(5000);
                        system("cls");
                        showMenu();
                    }
                    break;
                }
                case 3: {
                    system("cls");
                    showLogo();
                    cout << " \t\t\t  CHECK BALANCE TRANSACTION " << endl;
                    cout << "\n\n\t\t\t [ 1 ] From Savings" << endl;
                    cout << "\t\t\t [ 2 ] Back to Main Menu" << endl;
                    cout << "\t\t\t _____________________________________________" << endl;
                    cout << "\t\t\t Enter Your Check Balance Choice: ";
                    cin >> checkBalanceChoice;
                    while (checkBalanceChoice < 1 || checkBalanceChoice > 2) {
                        system("cls");
                        showLogo();
                        cout << endl << " \t\t\t  CHECK BALANCE TRANSACTION ";
                        cout << "\n\n\t\t\t Invalid Transaction!\n\t\t\t Please re-enter 1 or 2 :  ";
                        cin >> checkBalanceChoice;
                    }
                    if (checkBalanceChoice == 2) {
                        showMenu();
                    } else if (checkBalanceChoice == 1) {
                        system("cls");
                        showLogo();
                        cout << endl << " \t\t\t  BALANCE SAVINGS TRANSACTION ";
                        cout << "\n\n\t\t\t NEW AVAILABLE BALANCE : " << amount << endl;
                        waiting(3000);
                        showMenu();
                    }
                    break;
                }
                case 4: {
                    system("cls");
                    showLogo();
                    cout << " \t\t\t  FUND TRANSFER TRANSACTION " << endl;
                    cout << "\n\n\t\t\t [ 1 ] Transfer from Savings Account" << endl;
                    cout << "\t\t\t [ 2 ] Back to Main Menu" << endl;
                    cout << "\t\t\t _____________________________________________" << endl;
                    cout << "\t\t\t Enter Your Funds Transfer Transaction: ";
                    cin >> fundsTransferChoice;
                    while (fundsTransferChoice < 1 || fundsTransferChoice > 2) {
                        system("cls");
                        showLogo();
                        cout << endl << " \t\t\t  FUND TRANSFER TRANSACTION ";
                        cout << "\n\n\t\t\t Invalid Transaction!\n\t\t\t Please re-enter 1 or 2 :  ";
                        cin >> fundsTransferChoice;
                    }
                    if (fundsTransferChoice == 2) {
                        showMenu();
                    } else if (fundsTransferChoice == 1) {
                        int accntNo, amntNo;
                        system("cls");
                        showLogo();
                        cout << endl << " \t\t\t  SAVINGS TRANSFER TRANSACTION";
                        cout << "\n\n\t\t\t NEW SAVINGS BALANCE : " << amount;
                        cout << "\n\t\t\t Account Number (for Transfer) : ";
                        cin >> accntNo;
                        cout << "\n\t\t\t Amount Transfer :  ";
                        cin >> amntNo;
                        while (amntNo < 0 || amntNo > amount) {
                            system("cls");
                            showLogo();
                            cout << endl << " \t\t\t  SAVINGS TRANSFER TRANSACTION";
                            cout << "\n\n\t\t\t Invalid Amount!\n\t\t\t Please try again!";
                            cout << "\n\t\t\t Please enter Amount Transfer :  ";
                            cin >> amntNo;
                        }
                        waiting(1000);
                        cout << "\n\n\t\t\t The amount of  " << amntNo << " has been transferred to " << accntNo;
                        waiting(5000);
                        amount = amount - amntNo;
                        showMenu();
                    }
                    break;
                }
                case 5: {
                    cout << " \n\t\t\t Thank you for using our service." << endl << endl;
                    break;
                }
            }
        } while (choice != 5);
    }

    return 0;
}

// Function to display the welcome screen
void welcomeScreen() {
    cout << "\n\t\t\t****************************************************";
    cout << "\n\t\t\t*                    WELCOME TO                    *";
    cout << "\n\t\t\t*              ATM SIMULATION System               *";
    cout << "\n\t\t\t****************************************************";
    cout << "\n\n\n\n\n\n\t\t\tPlease INSERT your Card [Press ENTER to insert card] " << endl;
    cin.get();
}

// Function to display the logo
void showLogo() {
    cout << "\n\t\t\t****************************************************";
    cout << "\n\t\t\t*                    WELCOME TO                    *";
    cout << "\n\t\t\t*              ATM SIMULATION System               *";
    cout << "\n\t\t\t****************************************************" << endl;
}

// Function to display the main menu
void showMenu() {
    system("cls");
    showLogo();
    cout << endl << " \t\t\t <<------------------ MAIN MENU TRANSACTION ------------------>>";
    cout << "\n\n\t\t\t [ 1 ] Withdrawal" << endl;
    cout << "\t\t\t [ 2 ] Deposit" << endl;
    cout << "\t\t\t [ 3 ] Check Balance" << endl;
    cout << "\t\t\t [ 4 ] Funds Transfer" << endl;
    cout << "\t\t\t [ 5 ] Exit" << endl;
    cout << "\t\t\t _____________________________________________" << endl;
    cout << "\t\t\t Enter your choice: ";
}

// Function to display the receipt
void receipt() {
    system("cls");
    showLogo();
    char date[9];
    char time[9];
    _strdate(date);
    _strtime(time);
    cout << "\n\t\t\t             PRINTING RECEIPT...               " << endl;
    waiting(3000);
    system("cls");
    showLogo();
    cout << " \n\t\t\t        THANKS FOR USING OUR SERVICE          " << endl;
    cout << "\n\t\t\t---------------------------------------------" << endl;
    cout << "\n\t\t\t             ATM TRANSACTION RECORD           " << endl;
    cout << "\n\t\t\t----------------------------------------------" << endl;
    cout << "\n\t\t\t          DATE:    " << date << "                 " << endl;
    cout << "\n\t\t\t          TIME:    " << time << "                 " << endl;
    cout << "\n\t\t\t          LOCATION:   Mumbai                  " << endl;
    cout << "\n\t\t\t          CARD NUM:        ***********345     " << endl;
}
