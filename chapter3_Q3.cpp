#include<iostream>
#include<string>
using namespace std;
class Account {
	string name;
	int id, balance;
public:
	Account();
	Account(string n, int i, int b);
	int deposit(int money);
	string getOwner();
	int withdraw(int money);
	int inquiry();
};

Account::Account() {
	name = ""; id = 0; balance = 0;
}
Account::Account(string n, int i, int b) {
	name = n; id = i; balance = b;
}

int Account::deposit(int money) {
	balance += money;
	return money;
}

int Account::withdraw(int money) {
	balance -= money;
	return money;
}

string Account::getOwner() {
	return name;
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔고는 " << a.inquiry() << "입니다" << endl;
	a.withdraw(20000);
	cout << a.getOwner() << "의 잔고는 " << a.inquiry() << "입니다" << endl;
}
