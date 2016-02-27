#include <iostream>

using namespace std;

int main() {
    char ch = '+';
    int f, a = 10, b = 20;
    cout << "ch = " << ch << endl;
    switch(ch) {
        case '+': f = a + b; cout << "f = " << f << endl; break;
        case '-': f = a - b; cout << "f = " << f << endl; break;
        case '*': f = a * b; cout << "f = " << f << endl; break;
        case '/': f = a / b; cout << "f = " << f << endl; break;
        default: cout << "Invalid Operation" << endl;
    }
    ch = '-';
    cout << "ch = " << ch << endl;
    switch(ch) {
        case '+': f = a + b; cout << "f = " << f << endl; break;
        case '-': f = a - b; cout << "f = " << f << endl; break;
        case '*': f = a * b; cout << "f = " << f << endl; break;
        case '/': f = a / b; cout << "f = " << f << endl; break;
        default: cout << "Invalid Operation" << endl;
    }
    ch = '*';
    cout << "ch = " << ch << endl;
    switch(ch) {
        case '+': f = a + b; cout << "f = " << f << endl; break;
        case '-': f = a - b; cout << "f = " << f << endl; break;
        case '*': f = a * b; cout << "f = " << f << endl; break;
        case '/': f = a / b; cout << "f = " << f << endl; break;
        default: cout << "Invalid Operation" << endl;
    }
    ch = '/';
    cout << "ch = " << ch << endl;
    switch(ch) {
        case '+': f = a + b; cout << "f = " << f << endl; break;
        case '-': f = a - b; cout << "f = " << f << endl; break;
        case '*': f = a * b; cout << "f = " << f << endl; break;
        case '/': f = a / b; cout << "f = " << f << endl; break;
        default: cout << "Invalid Operation" << endl;
    }
    return 0;
}

