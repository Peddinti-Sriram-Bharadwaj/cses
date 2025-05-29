#include <iostream>
#include <vector>

int main() {
    int n, q;
    std::cin >> n >> q;
    char cell;

    // Prefix sum matrix (1-based indexing)
    std::vector<std::vector<int>> prefix(n + 1, std::vector<int>(n + 1, 0));

    // Read grid and build prefix sums
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cin >> cell;
            prefix[i][j] = (cell == '*') ? 1 : 0;
            prefix[i][j] += prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }

    int y1, x1, y2, x2;
    while (q--) {
        std::cin >> y1 >> x1 >> y2 >> x2; // y = row, x = col
        std::cout << prefix[y2][x2]
                    - prefix[y1 - 1][x2]
                    - prefix[y2][x1 - 1]
                    + prefix[y1 - 1][x1 - 1]
                  << std::endl;
    }

    return 0;
}
