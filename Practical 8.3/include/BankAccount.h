#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Logger
{
    public:
        static string logs[100];
        static int count;
        static void addLog(const string& message);
        static void displayLogs();
};

class StackTracker
{
    private:
        string funcName;
    public:
        StackTracker(const string& name);
        ~StackTracker();
};

class BankAccount
{
    private:
        double balance;

    public:
        BankAccount(double initialBalance);
        void deposit(double amount);
        void withdraw(double amount);
        void processTransaction(int type, double amount);
        double getBalance() const;
};

#endif
