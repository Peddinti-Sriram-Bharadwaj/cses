#include <iostream>

// TC :- constant
// SC :- constant

long long observedSum(int n){
    int x;
    long long sum = 0;

    for(int i = 0;i<n-1;i++){
        std::cin >> x;
        sum += x;
    }
    return sum;
}

long long expectedSum(long long n){
    return n*(n+ 1)/2;
}

long long missingNumber(int n){
    return expectedSum(n) - observedSum(n);
}

int main(){
    int n;
    std::cin >> n;
    std::cout << missingNumber(n);
    return 0;
}