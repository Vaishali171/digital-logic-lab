#include <iostream>
using namespace std;

bool AND(bool a, bool b) {
    return a && b;
}

bool OR(bool a, bool b) {
    return a || b;
}

bool NOT(bool a) {
    return !a;
}

int main() {

    cout << "AND(1,1) = " << AND(1,1) << endl;
    cout << "AND(1,0) = " << AND(1,0) << endl;

    cout << "OR(1,0) = " << OR(1,0) << endl;
    cout << "OR(0,0) = " << OR(0,0) << endl;

    cout << "NOT(1) = " << NOT(1) << endl;
    cout << "NOT(0) = " << NOT(0) << endl;

    return 0;
}
