#include "VectorReverser.h"
#include <iostream>

using namespace std;

int main()
{
    VectorReverser vr;

    vr.readInput();

    cout<<"\nOriginal Vector:\n";
    vr.display();

    vr.reverseUsingSTL();

    cout<<"\nAfter std::reverse():\n";
    vr.display();

    vr.reverseManual();

    cout<<"\nAfter Manual Iterator Reversal:\n";
    vr.display();

    return 0;
}
