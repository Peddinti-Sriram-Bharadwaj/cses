#include <iostream>

// TC:- linear
// SC:- constant

int longestRunLength(std::string s){
    int currentRunLength = 0;
    int longestRunLengthObservedSoFar = 0;
    char currentRunCandidate = s[0];
    
    for(char c : s){
        if(currentRunCandidate == c){
            currentRunLength +=1;
        }
        else{
            longestRunLengthObservedSoFar = std::max(longestRunLengthObservedSoFar, currentRunLength);
            currentRunCandidate = c;
            currentRunLength = 1;
            
        }
    }
    longestRunLengthObservedSoFar = std::max(longestRunLengthObservedSoFar, currentRunLength);
    return longestRunLengthObservedSoFar;

}

int main(){
    std::string s;
    std::cin >> s;
    std::cout << longestRunLength(s);
    return 0;
}