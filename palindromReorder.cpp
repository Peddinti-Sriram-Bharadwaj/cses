#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <deque>


std::vector<char> evenChars;
std::vector<char> oddChars;
std::unordered_map<char,int> freq;

bool isPalindDromePossible(){
    int odds = 0;
    for(auto x : freq){
        if(x.second%2) odds++;
        if(odds >1) return false;
    }
    
    return true;

}


void buildMap(std::string s){
    int n = s.size();
    for(char c : s){
        freq[c]++;
    }

}

void parityChars(){
    for (auto x : freq){
        if (x.second%2) oddChars.push_back(x.first);
        else evenChars.push_back(x.first);
    }
}

void palindrome(){
    parityChars();
    std::deque<char> palindromeDeque ;
    if(!oddChars.empty())  for(int i = 0;i<freq[oddChars[0]];i++) palindromeDeque.push_back(oddChars[0]);

    for (char c : evenChars){
        for(int i = 0;i<freq[c]/2;i++){
            palindromeDeque.push_front(c);
            palindromeDeque.push_back(c);
        }
    }

    for(char c : palindromeDeque) std::cout << c;
    std::cout << std::endl;


}

int main(){
    std::string s;
    std::cin >> s;
    
    buildMap(s);
    if(isPalindDromePossible()){
        palindrome();
    }
    else{
        std::cout << "NO SOLUTION";
    }

    return 0;
}