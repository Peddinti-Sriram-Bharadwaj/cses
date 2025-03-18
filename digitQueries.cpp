#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to calculate a^b using binary exponentiation
long long power(long long a, long long b){
    long long res = 1;
    while(b > 0){
        if(b & 1){
            res = res * a;
        }
        a = a * a;
        b >>= 1;
    } 
    return res;
    }

char findDigit(long long n) {
    long long digits = 1;
    long long count = 9;
    long long start = 1;

    while (n > digits * count) {
        n -= digits * count;
        digits++;
        count *= 10;
        start *= 10;
    }

    long long num = start + (n - 1) / digits;
    int index = (n - 1) % digits;

    string s = to_string(num);
    return s[index];
}

int main() {
    int q;
    cin >> q;
    
    for (int i = 0; i < q; ++i) {
        long long n;
        cin >> n;
        cout << findDigit(n) << endl;
    }

    return 0;
}

/*
    int q;
    cin >> q;
    vector<long long> queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }
    for (int i = 0; i < q; i++) {
        cout << findDigit(queries[i]) << endl;
    }
    return 0;
}
*/
/*
*/
