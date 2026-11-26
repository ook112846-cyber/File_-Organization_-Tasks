#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[20];
    int id;
    float grade;
    char choice;

    ofstream file("students.txt");

    do
    {
        cout << "Enter student name: ";
        cin.ignore();
        cin.getline(name, 20);

        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter grade: ";
        cin >> grade;

        file << name << ", " << id << ", " << grade << " $" << endl;

        cout << "Add another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y');

    file.close();

    return 0;
}
