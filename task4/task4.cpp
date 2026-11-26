#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Write the original sentence
    ofstream file("welcome.txt");
    file << "Hello Everybody";
    file.close();

    // Read the sentence
    ifstream readFile("welcome.txt");
    string text;
    getline(readFile, text);
    readFile.close();

    // Replace "body" with "one"
    size_t pos = text.find("body");

    if (pos != string::npos)
    {
        text.replace(pos, 4, "one");
    }

    // Write the final result on the same file
    ofstream outputFile("welcome.txt");
    outputFile << text;
    outputFile.close();

    cout << text << endl;

    return 0;
}
