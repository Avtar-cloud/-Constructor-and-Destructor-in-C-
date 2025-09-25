//avtar singh
// 2407012307

#include <iostream>
using namespace std;

class Student {
    string name;
    double fee;

public:
    Student() {
        cout << "Enter the name of Student: ";
        cin >> name;
        cout << "Enter the fee: ";
        cin >> fee;
    }

    void display() {
        cout << "\nStudent Name: " << name;
        cout << "\nFee: " << fee << endl;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}

// OUTPUT
// Enter the name of Student: Avtar
// Enter the fee: 156000

// Student Name: Avtar
// Fee: 156000
