#include <iostream>
#include <string>
using namespace std;

int calculate(int a, float b, char c, bool d) {
    return a + static_cast<int>(b) + static_cast<int>(c) + static_cast<int>(d);
}

float average(int a, float b, char c, bool d) {
    return (a + b + static_cast<int>(c) + static_cast<int>(d)) / 4.0;
}

bool isGreater(int a, float b, char c, string str) {
    return (a + b) > (str.length() + static_cast<int>(c));
}

char getSymbol(int a, float b, char c, string str) {
    return (str.length() > (a + static_cast<int>(b))) ? c : 'X';
}

int main() {
    cout << "calculate(5, 3.2, 'A', true): " << calculate(5, 3.2, 'A', true) << endl;
    cout << "average(5, 3.2, 'B', false): " << average(5, 3.2f, 'B', false) << endl;
    cout << "isGreater(10, 4.5, 'C', \"Hello\"): " << isGreater(10, 4.5, 'C', "Hello") << endl;
    cout << "getSymbol(2, 1.8, 'Y', \"Example\"): " << getSymbol(2, 1.8, 'Y', "Example") << endl;

    return 0;
}
