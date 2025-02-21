#include <iostream>
#include <cmath>

const long long MOD = 1000000007;

int main() {
    double n;
    std::cin >> n;

    int result = 1;
    for(int i = 1;i<=n;i++){
        result = (result * 2)%MOD;
    }

    std::cout << result << std::endl;

    return 0;
}
