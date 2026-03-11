#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void printInitial() {
    cout << "  OOO    DDDD    H   H" << endl;
    cout << " O   O   D   D   H   H" << endl;
    cout << " O   O   D   D   HHHHH" << endl;
    cout << " O   O   D   D   H   H" << endl;
    cout << "  OOO    DDDD    H   H" << endl;
}

void printPhoto() {
    ifstream file("photo.txt");
    string line;

    while (getline(file, line)) {
        cout << line << endl;
    }
}

int main() {

    cout << "===== My Initials (ODH) =====" << endl;
    cout << endl;

    printInitial();

    cout << endl;
    cout << "===== My ASCII Photo =====" << endl;
    cout << endl;

    printPhoto();

    return 0;
}