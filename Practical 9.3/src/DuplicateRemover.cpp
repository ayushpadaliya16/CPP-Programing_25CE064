#include "DuplicateRemover.h"
#include <iostream>

using namespace std;

void DuplicateRemover::readInput()
{
    int count, value;

    cout << "Enter the number of elements: ";
    cin >> count;

    uniqueElements.clear();

    for (int i = 0; i < count; ++i)
    {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> value;
        uniqueElements.insert(value);
    }
}

void DuplicateRemover::displayUsingSet()
{
    for (auto it = uniqueElements.begin(); it != uniqueElements.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";
}

void DuplicateRemover::displayUsingVector()
{
    vector<int> vec(uniqueElements.begin(), uniqueElements.end());

    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}
