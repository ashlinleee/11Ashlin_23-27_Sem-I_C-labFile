#include <iostream>
using namespace std;
void atmMenu() {
double balance = 5000.0;
while (true) {
cout << "\nATM Menu:\n";
cout << "1. Check Balance\n";
cout << "2. Deposit\n";
cout << "3. Withdraw\n";
cout << "4. Exit\n";
cout << "Enter your choice (1-4): ";
int choice;
cin >> choice;
switch (choice) {
case 1:
cout << "Your balance: $" << balance << endl;
break;
case 2:
double depositAmount;
cout << "Enter deposit amount: $";
cin >> depositAmount;
if (depositAmount > 0) {
balance += depositAmount;
cout << "Deposit successful. New balance: $" << balance << endl;
} else {
cout << "Invalid deposit amount.\n";
}
break;
case 3:
double withdrawAmount;
cout << "Enter withdrawal amount: $";
cin >> withdrawAmount;
if (withdrawAmount > 0 && withdrawAmount <= balance) {
balance -= withdrawAmount;
cout << "Withdrawal successful. New balance: $" << balance << endl;
} else {
cout << "Invalid withdrawal amount or insufficient funds.\n";
}
break;
case 4:
cout << "Exiting ATM. Thank you!\n";
return;
default:
cout << "Invalid choice. Please enter a number between 1 and 4.\n";
}
}
}
int main() {
cout << "Welcome to the Simple ATM Machine!\n";
atmMenu();
return 0;
}