#include <iostream>

void checkIfTotalIsAMultipleOfThree(){
    long long a, b;
    std::cin >> a >> b;
    if((a + b)%3) std::cout << "NO";
    else if (a > 2*b || b > 2*a) std::cout << "NO";
    else  std::cout << "YES";
    std::cout << std::endl;
}


int main(){
    int t;
    std::cin >> t;
    while(t--){
        checkIfTotalIsAMultipleOfThree();
    }
    return 0;
}