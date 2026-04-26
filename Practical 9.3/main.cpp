#include "DuplicateRemover.h"
#include <iostream>

using namespace std;

int main()
{
    DuplicateRemover remover;

    remover.readInput();

    cout << "\nUnique elements directly from std::set (Sorted):\n";
    remover.displayUsingSet();

    cout << "\nUnique elements after converting to std::vector:\n";
    remover.displayUsingVector();

    return 0;
}
