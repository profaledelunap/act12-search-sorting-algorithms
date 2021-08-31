#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ===============================================
//
// write: Guarda la información de un vector en un
// archivo file.
//
// ===============================================
void write(vector<int> &v, string file)
{
    ofstream outFile;
    outFile.open(file);
    for (int i = 0; i < v.size(); ++i)
    {
        outFile << v[i] << endl;
    }
    outFile.close();
}

// ===============================================
//
// read: Lee la información de un vector de el
// archivo file.
//
// ===============================================
void read(vector<int> &v, string file)
{
    ifstream inFile;
    inFile.open(file);
    string line;
    while (getline(inFile, line))
    {
        v.push_back(stoi(line));
    }
    inFile.close();
}

// ===============================================
//
// print: Imprime la información contenida en un
// vector.
//
// ===============================================
void print(vector<int> &v)
{
    cout << "[ ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
}
