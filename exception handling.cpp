#include <iostream>
#include <stdexcept>
using namespace std;

class Division {
public:
    double divide(double a, double b) {
        if (b == 0) {
            throw invalid_argument("Division by zero error");
        }
        return a / b;
    }
};

int main() {
    Division div;
    double num1, num2;

    cout << "Enter two numbers: ";
    if (!(cin >> num1 >> num2)) {
        cerr << "Invalid input error" <<endl;
        return 1;
    }

    try {
        double result = div.divide(num1, num2);
        cout << "Result: " << result << endl;
    } catch (const invalid_argument& e) {
        cerr << e.what() <<endl;
    }

    return 0;
}

