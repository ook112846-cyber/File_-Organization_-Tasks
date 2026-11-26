#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    int id;
    float grade;

    getline(cin, name);
    cin >> id >> grade;

    ofstream file("Student.txt");
    file << name << endl;
    file << id << endl;
    file << grade;
    file.close();

    return 0;
}
