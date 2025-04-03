#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> pos(n+1);
    for(int i = 0;i< n;++i){
        int num;
        std::cin >> num;
        pos[num] = i;
    }

    int rounds = 1;

    for(int i = 2;i<=n;++i){
        if(pos[i] < pos[i-1]) rounds++;
    }

    std::cout << rounds << std::endl;
    return 0;
}