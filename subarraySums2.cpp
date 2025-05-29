#include <iostream>
#include <vector>
#include <map>

int main(){
    int n, x;
    std::cin >> n >> x;

    std::vector<long long> arr(n);
    std::map<long long , long long> freq;
    freq[0] = 1;

    long long prefix = 0;
    long long res = 0;
    for(int i = 0;i<n;i++){
        std::cin >> arr[i];
        prefix += arr[i];
        if (freq.count(prefix-x)) res += freq[prefix-x];
        freq[prefix]++;
    }

    std::cout << res;
    return 0;
}