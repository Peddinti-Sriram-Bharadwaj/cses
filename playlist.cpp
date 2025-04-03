#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    std::vector<int> songs(n);

    for (int i = 0; i < n; i++) {
        cin >> songs[i];
    }

    std::map<int,int> last_seen;
    int l = 0;int maxlen = 0;
    
    for(int r = 0;r<n;r++){
        if(last_seen.count(songs[r])){
            l = std::max(l, last_seen[songs[r]] + 1);
        }

        last_seen[songs[r]] = r;
        maxlen = std::max(maxlen, r-l + 1);
    }

    std::cout << maxlen << std::endl;
    return 0;
}
