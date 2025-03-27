#include <iostream>
#include <vector>
#include <algorithm>

// expected tc :- nlogn
// expected sc :- n


int main(){
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for(auto &x : a) std::cin >> x;
    std::sort(a.begin(), a.end());

    int median = a[n/2];
    
    long long res = 0;
    
    for(int i = 0;i<n;i++) res += abs(a[i] - median);

    std::cout << res;
    
    return 0;
}