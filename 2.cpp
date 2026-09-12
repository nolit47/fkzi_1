#include <iostream>

int main() {
    int n = 10;
    long long a = 0, b = 1;

    std::cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++) {
        std::cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    std::cout << std::endl;
    return 0;
}