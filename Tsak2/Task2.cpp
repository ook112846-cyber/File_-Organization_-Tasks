#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("fruit.txt");
    string line;

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    ofstream out("fruit.txt", ios::app);
    out << "Fresh Fruits" << endl;
    out.close();

    return 0;
}
