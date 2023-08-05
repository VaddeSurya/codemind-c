#include <iostream>
int main() {
    int a, b, x, y;
    std::cin >> a >> b >> x >> y;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % x == 0 && i % y != 0) {
            sum += i;
        }
    }

    std::cout <<sum<<std::endl;
    return 0;
}
