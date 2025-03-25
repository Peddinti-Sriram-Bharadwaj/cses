#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

// expected TC :- nlog n
// expected SC :- n

int main(){
    int n;
    std::cin >> n;
    std::multiset<int> entry;
    std::multiset<int> exit;
    
    int a, b;
    for(int i = 0;i<n;i++){
        std::cin >> a >> b;
        entry.insert(a);
        exit.insert(b);
    }

    auto it1 = entry.begin();
    auto it2 = exit.begin();
    int res = 0;
    int temp = 0;

    while(it1 != entry.end() && it2 != exit.end()){
        if(*it1 < *it2){
            temp++;
            it1++;
        }
        else{
            temp--;
            it2++;
        }
        res = std::max(res, temp);
    }

    std::cout << res << std::endl;


    return 0;
}