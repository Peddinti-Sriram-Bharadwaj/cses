#include <iostream>
#include <vector>

void printSubsetsOfEqualSum(long long n){
    long long totalSum = n*(n+1)/2;
    if(totalSum & 1) std::cout << "NO";
    else{
        std::vector<long long> arr1, arr2;
        std::cout << "YES" << std::endl;
        long long halfTotalSum = totalSum /2;

        for(int i = n;i>0;i--){
            if(halfTotalSum - i >= 0){
                arr1.push_back(i);
                halfTotalSum -= i;
            }
            else{
                arr2.push_back(i);
            }

        }

        std::cout << arr1.size() << std::endl;
        for(int x : arr1) std::cout << x << " ";
        
        std::cout << std::endl << arr2.size() << std::endl;
        for(int x : arr2) std::cout << x << " ";


    }
}


int main(){
    int n;
    std::cin >> n;
    printSubsetsOfEqualSum(n);

    return 0;
}