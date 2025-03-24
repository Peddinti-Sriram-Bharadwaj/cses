#include <iostream>
#include <algorithm>
#include <vector>

//after sorting, the same numbers are grouped together
// so now the problem simply boils down to finding the number of groups
// the number of grops can be found by simply calculating the number of internal boundaries and adding a 1 to it.



int main(){
    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for(int i = 0;i<n;i++) std::cin >> arr[i];
    std::sort(arr.begin(), arr.end());

    int res = 1;

    for(int i = 1;i<n;i++){
        if(arr[i] != arr[i-1]) res++;
    }
    std::cout << res << std::endl;

    return 0;
}