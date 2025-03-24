#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    int n,x;
    std::cin >> n >> x;
    std::vector<int> p(n);
    
    for(auto  &x : p) std::cin >> x;
    std::sort(p.begin(), p.end());
    int res = 0;
    int wt = 0;

    int i = 0;
    int j = n-1;
    while(i<=j){
        int wt = p[i] + p[j];
        if(wt <= x){
            res ++;
            i++;
            j--;
        }
        else{
            res ++;
            j--;
        }
    }
    std::cout << res;



    return 0;
}