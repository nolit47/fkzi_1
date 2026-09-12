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

    std::cout << "Primes up to 50: ";
    int count = 0;
    int largest = 0;
    for (int i = 2; i <= 50; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
            count++;
            largest = i;
        }
    }
    std::cout << std::endl;
    std::cout << "Total primes found: " << count << std::endl;
    std::cout << "Largest prime found: " << largest << std::endl;
    return 0;
}