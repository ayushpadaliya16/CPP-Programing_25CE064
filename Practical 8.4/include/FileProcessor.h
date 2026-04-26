#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <string>

using namespace std;

class FileProcessor
{
    public:
        void run();
    private:
        bool processFile(const string& filename);
        void processLine(const string& line, int lineNumber);
};

#endif
