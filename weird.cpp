#include <iostream>

// tc:- log n (halving for even numbers)
// sc:- constant
// refer notes pg.1 and pg -1.

void print_collatz(long long n){
    std::cin >> n;
    while(true){
        std::cout << n << " ";
        if(n==1) break;
        n = (n&1) ? n*3 + 1 : n/2;
    }
    std::cout << std::endl;
}

int main(){
    long long n; 
    std::cin >> n;
    print_collatz(n);
    return 0;
}