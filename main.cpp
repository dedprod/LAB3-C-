#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec;
    int n =0;
    int x = 1;
    int num;
    std::cin >> n;
    if ((1 <= n) and (n <= 100000)) {
        for (int i = 0; i < n; i++) {
            std::cin >> num;
            vec.push_back(num);
        }
        sort(vec.begin(), vec.end());

        for (int i = 0; i < n - 1; i++) {
            if (vec[i] != vec[i + 1]) {
                x = x + 1;
            }
        }

        std::cout << x;
    }

    return 0;
}
