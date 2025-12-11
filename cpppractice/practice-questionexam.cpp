#include <iostream>
#include <cstring>
using namespace std;

class account {
    int account_no;
    float balance;
    char Name[50];   // fixed size

public:
    void get();
    void add_balance();
    void disp();
};

void account::get() {
    cout << "Enter name: ";
    cin >> Name;

    cout << "Enter account number: ";
    cin >> account_no;

    cout << "Enter balance: ";
    cin >> balance;
}

void account::add_balance() {
    float b;

    cout << "Add balance: ";
    cin >> b;

    balance += b;
}

void account::disp() {
    cout << "\nName: " << Name;
    cout << "\nAccount No: " << account_no;
    cout << "\nBalance: " << balance << endl;
}

int main() {
    account obj;
    obj.get();
    obj.add_balance();
    obj.disp();
    return 0;
}