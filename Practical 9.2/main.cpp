#include "WordCounter.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    WordCounter counter;
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    counter.processSentence(sentence);

    cout << "\nWord Frequencies:\n";
    counter.displayFrequencies();

    return 0;
}
