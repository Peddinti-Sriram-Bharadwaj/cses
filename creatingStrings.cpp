#include <iostream>
#include <string>
#include <set>
#include <algorithm>


std::string s;
int n;
std::set<std::string> permutations;

void generateAllPermutations(std::string s) {
  do {
    permutations.insert(s);
  } while (std::next_permutation(s.begin(), s.end()));
}

void printAllPermutations() {
  std::cout << permutations.size() << std::endl;
  for (auto x : permutations) std::cout << x << std::endl;
}


int main() {
  std::cin >> s;
  n = s.size();
  std::sort(s.begin(), s.end());
  generateAllPermutations(s);
  printAllPermutations();

  return 0;
}
