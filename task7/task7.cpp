#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string names[] = {
        "Hadeer Mahmoud",
        "Youssef Ali",
        "Ahmed Mostafa",
        "Esraa Ebrahim"
    };

    int n = 4;

    sort(names, names + n);

    for (int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}
