#include "VectorReverser.h"
#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

void VectorReverser::readInput()
{
    int count;
    int value;

    cout<<"Enter the number of elements: ";
    cin>>count;

    data.clear();
    for (int i=0;i<count;++i)
    {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> value;
        data.push_back(value);
    }
}

void VectorReverser::display()
{
    for (auto it = data.begin(); it != data.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";
}

void VectorReverser::reverseUsingSTL()
{
    reverse(data.begin(), data.end());
}

void VectorReverser::reverseManual()
{
    if (data.empty())
    {
        return;
    }

    auto left = data.begin();
    auto right = data.end() - 1;

    while (left < right)
    {
        swap(*left, *right);
        ++left;
        --right;
    }
}
