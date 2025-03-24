#include <iostream>
#include <set>
#include <algorithm>

// expected TC :- n log n + m log n
// expeted sc :- n . 

int main(){
    int n, m;
    std:: cin >> n >> m;
    std::multiset<int> h;

    for(int i = 0;i<n;i++){
        int x; 
        std::cin >> x;
        h.insert(x);
    }

    int t;

    for(int i = 0;i<m;i++){
        std:: cin >> t;
        auto it = h.upper_bound(t);
        if(it == h.begin()) std::cout << -1 << std::endl;
        else{
            it--;
            std::cout << *it << std::endl;
            h.erase(it);
        }
        
    }

    return 0;
}