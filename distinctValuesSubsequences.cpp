#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int cnt = 0;

void dfs(int idx, const vector<int>& arr, unordered_set<int>& seen) {
    if (idx == arr.size()) {
        if (!seen.empty()) cnt++;
        return;
    }

    dfs(idx + 1, arr, seen); // Exclude current

    if (!seen.count(arr[idx])) {
        seen.insert(arr[idx]);
        dfs(idx + 1, arr, seen); // Include current
        seen.erase(arr[idx]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;

    unordered_set<int> seen;
    dfs(0, arr, seen);
    cout << cnt << '\n';

    return 0;
}
