#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    indexed_set s;
    for (int i = 1; i <= n; i++) s.insert(i);

    int ind = k % n;
    while (n--) {
        auto it = s.find_by_order(ind);
        cout << *it << " ";
        s.erase(it);
        if (n) ind = (ind + k) % n;
    }
}
