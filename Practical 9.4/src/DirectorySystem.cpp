#include "DirectorySystem.h"
#include <iostream>

using namespace std;

void DirectorySystem::addFolder()
{
    string folderName;
    cout << "Enter folder name: ";
    cin >> folderName;

    if (directory.find(folderName) == directory.end())
    {
        directory[folderName] = vector<string>();
        cout << "Folder created.\n";
    }
    else
    {
        cout << "Folder already exists.\n";
    }
}

void DirectorySystem::addFile()
{
    string folderName, fileName;
    cout << "Enter folder name: ";
    cin >> folderName;

    auto it = directory.find(folderName);
    if (it != directory.end())
    {
        cout << "Enter file name: ";
        cin >> fileName;
        it->second.push_back(fileName);
        cout << "File added.\n";
    }
    else
    {
        cout << "Folder not found.\n";
    }
}

void DirectorySystem::display()
{
    if (directory.empty())
    {
        cout << "Directory is empty.\n";
        return;
    }

    for (auto it = directory.begin(); it != directory.end(); ++it)
    {
        cout << "[" << it->first << "]\n";
        if (it->second.empty())
        {
            cout << "  (Empty)\n";
        }
        else
        {
            for (size_t i = 0; i < it->second.size(); ++i)
            {
                cout << "  - " << it->second[i] << "\n";
            }
        }
    }
}

void DirectorySystem::run()
{
    int choice;
    while (true)
    {
        cout << "\n1. Add Folder\n2. Add File to Folder\n3. Display Directory\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addFolder();
                break;
            case 2:
                addFile();
                break;
            case 3:
                display();
                break;
            case 4:
                return;
            default:
                cout << "Invalid choice.\n";
        }
    }
}
