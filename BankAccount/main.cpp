#include<iostream>
#include<string>
#include"BankAccount.h"
using namespace std;

void printAccount(BankAccount bankAccount);

int main()
{
	BankAccount firstAccount("John", 200);
	firstAccount.deposit(100);
	firstAccount.withdraw(50);
	printAccount(firstAccount);
	firstAccount.deposit(0);
	firstAccount.withdraw(500);
	printAccount(firstAccount);

	BankAccount secondAccount("Helen");
	printAccount(secondAccount);

	return 0;
}
void printAccount(BankAccount bankAccount)
{
	cout << bankAccount.getOwner() << "'s account contains "
		<< bankAccount.getBalance() <<" dollors" <<endl;
}