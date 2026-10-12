#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create an ofstream object to write into a file
    ofstream fout;
    string line;

    // Open the file in output mode
    fout.open("sample.txt");

    // Read input from the user and write into the file
    while (fout)
    {
        getline(cin, line);
 
        // Press -1 to exit
        if (line == "-1")
            break;

        // Write the line into the file
        fout << line << endl;
    }

    // Close the file
    fout.close();

    // Create an ifstream object to read the file
    ifstream fin;

    // Open the file in input mode
    fin.open("sample.txt");

    // Read and display the file contents
    while (getline(fin, line))
    {
        cout << line << endl;
    }

    // Close the file
    fin.close();

    return 0;
}