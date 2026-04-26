#include "BankAccount.h"
#include <iostream>
#include<string>

using namespace std;

string Logger::logs[100];
int Logger::count = 0;

void Logger::addLog(const string& message)
{
    if(count < 100)
    {
        logs[count++] = message;
    }
}

void Logger::displayLogs()
{
    cout<<"TRANSACTION & STACK UNWINDING LOGS\n";
    for (int i=0; i<count; i++)
    {
        cout<<logs[i]<<"\n";
    }
}

StackTracker::StackTracker(const string& name)
{
    funcName = name;
    Logger::addLog("Entering function: " + funcName);
}

StackTracker::~StackTracker()
{
    Logger::addLog("Exiting function: " + funcName);
}

BankAccount::BankAccount(double initialBalance)
{
    balance = initialBalance;
    Logger::addLog("Account initialized with balance: " + to_string(balance));
}

void BankAccount::deposit(double amount)
{
    StackTracker tracker("BankAccount::deposit");

    if (amount <= 0)
    {
        throw invalid_argument("Deposit amount must be strictly positive.");
    }

    balance += amount;
    Logger::addLog("Deposit successful. New balance: " + to_string(balance));
}

void BankAccount::withdraw(double amount)
{
    StackTracker tracker("BankAccount::withdraw");

    if (amount <= 0)
    {
        throw invalid_argument("Withdrawal amount must be strictly positive.");
    }
    if (amount > balance)
    {
        throw runtime_error("Insufficient funds for withdrawal. Overdraft denied!");
    }

    balance -= amount;
    Logger::addLog("Withdrawal successful. New balance: $" + to_string(balance));
}

void BankAccount::processTransaction(int type, double amount)
{
    StackTracker tracker("BankAccount::processTransaction");

    if (type == 1)
    {
        deposit(amount);
    } else if (type == 2)
    {
        withdraw(amount);
    } else
    {
        throw invalid_argument("Invalid transaction type (Use 1 for Deposit, 2 for Withdraw).");
    }
}

double BankAccount::getBalance() const
{
    return balance;
}
