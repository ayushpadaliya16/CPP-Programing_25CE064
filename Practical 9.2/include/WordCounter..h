#ifndef WORDCOUNTER_H
#define WORDCOUNTER_H

#include <string>
#include <map>

using namespace std;

class WordCounter
{
    private:
        map<string, int> wordMap;

    public:
        void processSentence(const string& sentence);
        void displayFrequencies() const;
};

#endif
