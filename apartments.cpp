#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;

    std::vector<int> a(n);
    std::vector<int> b(m);

    for(auto &x : a) std:: cin >> x;
    for(auto &x : b) std:: cin >> x;

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    int i =0, j = 0;
    int res = 0;

    while(i<n && j<m){
        if(a[i] <= b[j] + k && a[i] >= b[j] - k){
            res++;
            i++;
            j++;
        }
        else if (a[i] < b[j] -  k){
            i++;
        }
        else{
            j++;    
        }
    }

    std::cout << res;
    return 0;
}
