#include <iostream>
#include <list>
using namespace std;

// expected TC: linear
// expected SC: linear


void josephusOrder(int n, int k){
    list<int> persons;
    for(int i =0;i<n;i++) persons.push_back(i+1);

    auto it = persons.begin();
    
    while(!persons.empty()){
        for(int i = 0;i<k-1;i++){
             it++;
        if(it == persons.end()) it = persons.begin();
        }

        int person = *it;
        it = persons.erase(it);
        if(it == persons.end()) it = persons.begin();
        cout << person << " ";
    }
    
}


int main() {
    int n;
    std::cin >> n;

    josephusOrder(n, 2);
    return 0;
}
