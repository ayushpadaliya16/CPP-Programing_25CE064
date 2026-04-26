#include "WordCounter.h"
#include <iostream>
#include <sstream>

using namespace std;

void WordCounter::processSentence(const string& sentence)
{
    wordMap.clear();
    stringstream ss(sentence);
    string word;

    while (ss >> word)
    {
        wordMap[word]++;
    }
}

void WordCounter::displayFrequencies() const
{
    for (auto const& pair : wordMap) {
        cout << pair.first << " : " << pair.second << "\n";
    }
}
