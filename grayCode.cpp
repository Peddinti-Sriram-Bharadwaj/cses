#include <iostream>
#include <vector>

void generateGrayCode(int n, std::vector<std::string> &result) {
    if (n == 0) {
        result.push_back("");
        return;
    }

    generateGrayCode(n - 1, result);
    int size = result.size();

    for (int i = size - 1; i >= 0; --i) {
        result.push_back("1" + result[i]);
        result[i] = "0" + result[i];
    }
}

int main() {
    int n;
    std:: cin >> n;
    std::vector<std::string> grayCode;
    generateGrayCode(n, grayCode);

    for (const auto &code : grayCode) {
        std::cout << code << std::endl;
    }

    return 0;
}
