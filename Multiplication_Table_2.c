#include<iostream>
using namespace std;

int main() {
    int n, j;
    cin >> n >> j;
    for (int i = 1; i <= j; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
