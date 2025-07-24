#include <iostream>
using namespace std;

int main() {
    int balance = 0;
    int amount, pin, num;

    cout << "Welcome to ATM station";
    cout << "\nEnter your pin number:  ";
    cin >> pin;

    if (pin == 1234) {
            cout << "\nChoose What service you want:\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";
			cout << "Enter your choice: ";
            cin >> num;

            if (num == 1) {
                cout << "Your balance is: " << balance << endl;
            }
            else if (num == 2) {
                cout << "Enter the amount you want to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Your new balance is: " << balance << endl;
            }
            else if (num == 3) {
                cout << "Enter the amount you want to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                }
                else {
                    balance -= amount;
                    cout << "Your new balance is: " << balance << endl;
                }
            }
            else if (num == 4) {
                cout << "Thank you for using our service!" << endl;
            }
            else {
                cout << "Invalid choice!" << endl;
            }
        }
    else {
        cout << "Incorrect pin number!" << endl;
	}

    return 0;
}
