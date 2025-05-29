#include <iostream>
#include <vector>

int main(){
    int n, q;
    std::cin >> n >> q;
    std::vector<long long> arr(n);
    for(auto &x : arr) std::cin >> x;

    std::vector<long long> prefix;
    prefix.push_back(0);

    for(int i = 1;i<=n;i++) prefix.push_back(prefix.back() + arr[i-1]);
    while(q--){
        int a, b;
        std::cin >> a >> b;
        std::cout << prefix[b] - prefix[a-1] << std::endl;
    }
    return 0;
}