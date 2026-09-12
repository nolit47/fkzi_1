#include <iostream>

int main() {
    int n = 10;
    long long a = 0, b = 1, sum = 0;

    std::cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++) {
        std::cout << a << " ";
        sum += a;
        long long next = a + b;
        a = b;
        b = next;
    }
    std::cout << std::endl;
    std::cout << "Sum of first " << n << " terms: " << sum << std::endl;
    return 0;
}