#include <iostream>
#include <vector>
#include <algorithm>


std::vector<long long> apples;
int n;
long long minDiff = -1;

// brute force approach

void minimumPartitionDivision(long long sum1, long long sum2, int i){
    if(i ==n){
        long long diff = std::abs((long long)sum1-sum2);
        if(minDiff == -1 || diff < minDiff){
            minDiff = diff;
        }
        return;
    }
    minimumPartitionDivision(sum1+apples[i],sum2,i+1);
    minimumPartitionDivision(sum1,sum2+apples[i],i+1);
}

int main(){
    std::cin >> n;
    long long apple;
    apples.reserve(n);
    for(int i = 0;i<n;i++) {
        std::cin >> apple;
        apples.push_back(apple);
    }
    minimumPartitionDivision(0,0,0);
    std::cout << minDiff << std::endl;
    return 0;
}
