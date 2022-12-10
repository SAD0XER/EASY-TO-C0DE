#include <iostream>
using namespace std;

void myFunc(int x) {
    x = 106;
}

int main() {
    int var = 20;
    myFunc(var);
    cout << var;
}