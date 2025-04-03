#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    int n;
    std::cin >> n;

    std::vector<int> v;

    for(int i = 0;i<n;i++){
        int cube;
        std::cin >> cube;

        auto it = upper_bound(v.begin(), v.end(), cube);
        if(it == v.end()) v.push_back(cube);
        else *it = cube;
    }
    std::cout << v.size();
    

    return 0;
}