#ifndef VECTORREVERSER_H
#define VECTORREVERSER_H

#include <vector>
using namespace std;

class VectorReverser
{
    private:
        vector<int> data;

    public:
        void readInput();
        void display();
        void reverseUsingSTL();
        void reverseManual();
};

#endif
