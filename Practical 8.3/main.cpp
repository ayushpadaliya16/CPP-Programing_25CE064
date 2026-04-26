#include "BankAccount.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    cout<<"BANKING SYSTEM STARTED \n";

    BankAccount myAccount(500.0);

    try
    {
        cout<<"\nProcessing a valid deposit of 200\n";
        myAccount.processTransaction(1, 200.0);

        cout<<"\nProcessing an invalid withdrawal of 1000\n";
        myAccount.processTransaction(2, 1000.0);

        cout<<"This line will never print.\n";

    }
    catch (const exception& e)
    {
        Logger::addLog(string("\nEXCEPTION CAUGHT: ")+e.what()+"\n");
        cout<<"\nError Handled: " <<e.what()<<"\n";
    }

    Logger::displayLogs();

    return 0;
}
