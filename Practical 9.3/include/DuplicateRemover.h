#ifndef DUPLICATEREMOVER_H
#define DUPLICATEREMOVER_H

#include <set>
#include <vector>
using namespace std;

class DuplicateRemover
{
    private:
        set<int> uniqueElements;

    public:
        void readInput();
        void displayUsingSet();
        void displayUsingVector();
};

#endif
