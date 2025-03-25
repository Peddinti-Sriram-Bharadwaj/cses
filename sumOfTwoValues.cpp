#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

// expected TC:- n log n
// expected SC:- n



int main(){
    int n, x;
    std::cin >> n >> x;
    
    std::vector<int> a;
    std::map<int,int> indices;
    int t;
    for(int i = 0;i<n;i++) {
        std::cin >> t;
        a.push_back(t);
        indices[t] = i;
    }

    for(int i = 0;i<n;i++){
        int target = x - a[i];
        if(indices.find(target) != indices.end()){
            int j = indices[target];
            if(j != i){
                std::cout << i+1 << " " << j+1;
                return 0;
            }
        }
    }

    std::cout << "IMPOSSIBLE";


    return 0;
}