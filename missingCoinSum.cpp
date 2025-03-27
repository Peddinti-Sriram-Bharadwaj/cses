#include <iostream>
#include <vector>
#include <algorithm>

// expected TC :- nlogn
// expected SC :- linear
int main() {
    int n;
    std::cin >> n;
    std::vector<long long> coins(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> coins[i];
    }
    std::sort(coins.begin(), coins.end());

    long long reachable_sum = 1;
    for (int i = 0; i < n; ++i) {
        if (coins[i] > reachable_sum) {
            std::cout << reachable_sum << std::endl;
            return 0;
        }
        // if reachable sum is smaller than coins[i] and all sums upto coins[i] are possible, then all the sums between coins[i] and reachable + coins[i] are also possible. so we skip forward. 
        reachable_sum += coins[i];
    }

    std::cout << reachable_sum << std::endl;
    return 0;
}
