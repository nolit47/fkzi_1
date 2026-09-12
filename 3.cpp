#include <iostream>

int main() {
    double a, b;
    char op;

    std::cout << "Enter expression (e.g. 3 + 4): ";
    std::cin >> a >> op >> b;

    double result = 0;
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b != 0) result = a / b;
            else { std::cout << "Cannot divide by zero!" << std::endl; return 1; }
            break;
        case '%':
            if (static_cast<int>(b) != 0) result = static_cast<int>(a) % static_cast<int>(b);
            else { std::cout << "Cannot mod by zero!" << std::endl; return 1; }
            break;
        default:
            std::cout << "Unknown operator" << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;
    std::cout << "Operands were: " << a << " and " << b << std::endl;
    std::cout << "Operator used: " << op << std::endl;
    return 0;
}