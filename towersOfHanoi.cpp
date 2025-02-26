#include <iostream>
#include <cmath>


void towersOfHanoi(int n, int a, int b, int c) {
    if (n == 0) return;
    
    towersOfHanoi(n - 1, a, c, b);
    std::cout << a << " " << c << std::endl;
    towersOfHanoi(n - 1, b, a, c);
}

int main() {
    int n;
    std::cin >> n;

    // Calculate the number of steps (2^n - 1)
    long long steps = (long long)pow(2, n) - 1;
    std::cout << steps << std::endl;

    towersOfHanoi(n, 1, 2, 3);

    return 0;
}

