#include <iostream>

// TC : linear
// SC : constant

long long totalPositionings(long long k){
    return k*k*(k*k -1) /2;
}
long long attackingPositionings(long long k){
    long long numberOf2x3subBoards = (k-1) * (k-2);
    return numberOf2x3subBoards;
}

void friendlyKnightPositions(int k){
    std::cout << totalPositionings(k) - 4*attackingPositionings(k) << std::endl;
}
int main(){
    int k;
    std::cin >> k;
    for(int i = 1;i<=k;i++){
        friendlyKnightPositions(i);
    }

    return 0;
}