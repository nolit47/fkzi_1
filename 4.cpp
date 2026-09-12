#include <iostream>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 29;
    std::cout << num << (isPrime(num) ? " is prime" : " is not prime") << std::endl;
    return 0;
}