#include <iostream>
using namespace std;

// tc:- linear
// sc:- constant
int main(){
    int n; 
    cin >> n;
    while(true){
        cout << n << " ";
        if(n == 1) break;
        if(n%1) n = n*3 + 1;
        else n = n/2;
    }
    return 0;
}