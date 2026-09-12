#include <iostream>

int main() {
    double a, b;
    char op;

    std::cout << "enter expression: ";
    std::cin >> a >> op >> b;

    double result = 0;
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b != 0) result = a / b;
            else { std::cout << "cannot divide by zero!" << std::endl; return 1; }
            break;
        default:
            std::cout << "unknown operator" << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}