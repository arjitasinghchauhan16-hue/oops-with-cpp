#include <iostream>
using namespace std;
class BankAccount{
    int accountNo;
    string name;
    float balance;
public:
    BankAccount(int acc, string n, float bal){
        accountNo=acc;
        name=n;
        balance=bal;
    }
    friend void compareBalance(const BankAccount &a1, const BankAccount &a2);
};
void compareBalance(const BankAccount &a1, const BankAccount &a2) {
    if (a1.balance>a2.balance){
        cout<<"Account Holder with Higher Balance:"<<endl;
        cout<<"Account Number: "<<a1.accountNo<<endl;
        cout<<"Customer Name: "<<a1.name<<endl;
        cout<<"Balance: "<<a1.balance<<endl;
    }
    else {
        cout<<"Account Holder with Higher Balance:"<<endl;
        cout<<"Account Number: "<<a2.accountNo<<endl;
        cout<<"Customer Name: "<<a2.name<<endl;
        cout<<"Balance: "<<a2.balance<<endl;
    }
}
int main(){
    BankAccount b1(101, "Arjita", 50000);
    BankAccount b2(102, "Dhananjay", 75000);
    compareBalance(b1, b2);
    return 0;
}