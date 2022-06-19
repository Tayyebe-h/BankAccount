#include<iostream>
#include<string>
#include"BankAccount.h"

using namespace std;

BankAccount::BankAccount(string owner)
{
	this->owner = owner;
	this->balance = 0;
}
BankAccount::BankAccount(string owner, int balance)
{
	this->owner = owner;
	if (balance > 0)
	{
		this->balance = balance;
	}
	else
	{
		cout << "The balance must be greater than 0!" << endl;
	}
}
void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		cout << "The amount to deposit must be greater than 0" << endl;
	}
}
void BankAccount::withdraw(int amount)
{
	if (amount > 0 && amount <= balance)
	{
		balance -= amount;
	}
	else
	{
		cout << "The amount to withdraw must be greater than 0"
			<< " and less than your balance" << endl;
	}
}
string BankAccount::getOwner() const
{
	return owner;
}
int BankAccount::getBalance() const
{
	return balance;
}