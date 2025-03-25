#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    std::cin >> n;
    std::vector<long long> a(n);
    
    for(auto &x : a) std::cin >> x;
    
    long long res = a[0];
    long long temp = a[0];
    for(int i = 1;i<n;i++){
        temp = std::max(temp + a[i], a[i]);
        res = std::max(res, temp);
    }
    std::cout << res;

    return 0;
}