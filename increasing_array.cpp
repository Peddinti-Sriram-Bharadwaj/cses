#include <iostream>

long long addUpMovingResiduals(int n){
    long long residualSum = 0;
    int temp ;
    std::cin >> temp;
    int x;

    for(int i = 0;i<n-1;i++){
        std::cin >> x;
        if(x < temp){
            residualSum += temp - x;
            x = temp;
        }
        temp = x;
    }
    return residualSum;
}


int main(){
    int n;
    std::cin >> n;
    std::cout << addUpMovingResiduals(n);


    return 0;
}