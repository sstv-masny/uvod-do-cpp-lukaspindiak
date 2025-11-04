
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Zadaj pocet km" << endl;
    cin >> k;
    cout << "in: " << k << endl;

    if (k > 2) {
        cout << "Cena je: " << 4 + 1.5 * (k - 2);
    }

    else if (k <= 2) {
        cout << "cena je: 4";
    }

    return 0;
}
