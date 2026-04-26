#ifndef DIRECTORYSYSTEM_H
#define DIRECTORYSYSTEM_H

#include <string>
#include <vector>
#include <map>
using namespace std;


class DirectorySystem
{
    private:
        map<string, vector<string>> directory;

    public:
        void addFolder();
        void addFile();
        void display();
        void run();
};

#endif
