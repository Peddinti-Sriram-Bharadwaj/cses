#include <iostream>

long long rowHead(long long n){
    if(n&1) return (n+1) * (n+1);
    else return n*n + 1;
}

long long columnHead(long long  n){
    if(n&1) return n*n + 1;
    else return (n+1)*(n+1);
}

long long numberIfStartingFromColumnHead(long long x, long long y){
    long long startPoint = columnHead(y);
    if(y&1) return startPoint + x;
    else return startPoint -x;

}

long long numberIfStartingFromRowHead(long long x, long long y){
        long long startPoint = rowHead(x);
        if(x&1) return startPoint - y;
        else return startPoint + y;
}

void spiralNumber(){
    long long int x, y;
    std::cin >> x >> y;
    
    x--;
    y--;

    if(x < y)  std::cout << numberIfStartingFromColumnHead(x, y);
    else std::cout << numberIfStartingFromRowHead(x,y);

    std::cout << std::endl;
}


int main(){
    int t;
    std::cin >> t;

    while(t--){
        spiralNumber();
    }

    return 0;
}