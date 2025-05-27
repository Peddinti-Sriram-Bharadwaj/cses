#include <iostream>
#include <set>
#include <vector>


int main(){

    int n;
    std::cin >> n;
    std::set<int> nums;
    std::vector<int> arr(n);
    for(auto &x : arr) std::cin >> x;

    long long i = 0;
    long long j = 0;
    long long res = 0;

    // arr[j] is arr[0], safe to access now since n > 0

    while(i < n){
        while(nums.count(arr[i])){ // .count() is efficient for checking existence
            nums.erase(arr[j]); // Remove the leftmost element of the window
            j++;                   // Move the left pointer
        }
        nums.insert(arr[i]); // Add the current element (arr[i]) to the set
        res += i - j + 1  ;       // Increment result
        i++;                   // Move the right pointer
    }

    std::cout << res << std::endl; // Added newline for cleaner output
    return 0;
}