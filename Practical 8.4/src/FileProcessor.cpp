#include "FileProcessor.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void FileProcessor::run()
{
    string filename;
    bool success = false;

    while (!success)
    {
        cout << "Enter file path (or 'exit' to quit): ";
        getline(cin, filename);

        if (filename == "exit")
        {
            break;
        }

        success = processFile(filename);
    }
}

bool FileProcessor::processFile(const string& filename)
{
    ifstream file(filename);

    if (!file.is_open())
    {
        cout << "Error: Cannot open file.\n\n";
        return false;
    }

    string line;
    int lineNumber = 0;

    while (getline(file, line))
    {
        lineNumber++;
        processLine(line, lineNumber);
    }

    file.close();
    return true;
}

void FileProcessor::processLine(const string& line, int lineNumber)
{
    if (line.empty())
    {
        return;
    }

    stringstream ss(line);
    double num;
    double sum = 0.0;
    int count = 0;
    bool isCorrupt = false;
    string token;

    while (ss >> token)
    {
        stringstream converter(token);
        if (converter >> num)
        {
            sum += num;
            count++;
        }
        else
        {
            isCorrupt = true;
            break;
        }
    }

    if (isCorrupt)
    {
        cout << "Line " << lineNumber << " Corrupt: Non-numeric data found.\n";
    }
    else if (count > 0)
    {
        double avg = sum / count;
        cout << "Line " << lineNumber << " Processed: Sum = " << sum << ", Average = " << avg << "\n";
    }
}
