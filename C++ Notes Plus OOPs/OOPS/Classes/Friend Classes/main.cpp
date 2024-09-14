#include <bits/stdc++.h>
using namespace std;

class accounts {
private:
    int customer_id;
    int bank_balance = 0;
    int loan_amount = 0;

public:
    accounts(int id, int balance, int amount) {
        this->customer_id = id;
        this->bank_balance = balance;
        this->loan_amount = amount;
    }

    friend class loans;
};

class loans {
public:
    void display(accounts &customer) {
        cout << endl
             << endl;

        cout << "Customer ID: " << customer.customer_id << endl
             << "Customer Balance: " << customer.bank_balance << endl
             << "Customer loan amount: " << customer.loan_amount << endl;

        cout << endl
             << endl;
    }
};

int main() {

    accounts acc1(12345, 10000, 5000);
    loans loan_acc1;
    loan_acc1.display(acc1);

    return 0;
}

// Output
// Customer ID: 12345
// Customer Balance: 10000
// Customer loan amount: 5000