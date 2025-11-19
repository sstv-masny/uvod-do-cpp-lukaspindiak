#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Zadaj cislo" << endl;
    cin >> n;
    cout << "in: " << n << endl;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << "out: " << sum;
    return 0;
}
