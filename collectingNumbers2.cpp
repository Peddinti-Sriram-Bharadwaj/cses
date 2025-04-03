#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> arr(n + 1);  // Store the permutation (1-based indexing)
    vector<int> pos(n + 1);  // Store the index of each number

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;  // Store index of number
    }

    // Calculate initial round count
    int rounds = 1;
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) rounds++;
    }

    // Process swap operations
    while (m--) {
        int x, y;
        cin >> x >> y;

        // Swap values in arr
        swap(arr[x], arr[y]);

        // Positions that change
        set<int> affected = {arr[x], arr[y], arr[x] - 1, arr[x] + 1, arr[y] - 1, arr[y] + 1};

        // Before swap: count rounds
        for (int num : affected) {
            if (num > 1 && num <= n)
                if (pos[num] < pos[num - 1]) rounds--;
        }

        // Swap indices in pos[]
        swap(pos[arr[x]], pos[arr[y]]);

        // After swap: update round count
        for (int num : affected) {
            if (num > 1 && num <= n)
                if (pos[num] < pos[num - 1]) rounds++;
        }

        cout << rounds << endl;
    }

    return 0;
}
